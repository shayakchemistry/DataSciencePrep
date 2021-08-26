from collections import namedtuple

from pyspark.sql import *
from SparkProject.RDD.lib.logger import Log4J

SurveyRecord = namedtuple("SurveyRecord", ["Age", "Gender", "Country", "State"])

if __name__ == "__main__":
    # Spark session creation
    spark = SparkSession.builder\
        .appName("RDD example")\
        .getOrCreate()
    sc = spark.sparkContext
    # Setting log level in spark context.
    spark.sparkContext.setLogLevel("INFO")
    # Getting log object from spark session.
    log = Log4J(spark)
    log.info("RDD example program.")
    # Reading data from a csv file via textFile method which returns rdd.
    rdd = sc.textFile("data/sample.csv")
    partitionedRDD = rdd.repartition(2)
    colsRDD = partitionedRDD.map(lambda line: line.replace('"', '').split(","))
    selectRDD = colsRDD.map(lambda cols: SurveyRecord(int(cols[1]), cols[2], cols[3], cols[4]))
    filteredRDD = selectRDD.filter(lambda r: r.Age < 40)
    kvRDD = filteredRDD.map(lambda r: (r.Country, 1))
    countRDD = kvRDD.reduceByKey(lambda v1, v2: v1 + v2)

    colsList = countRDD.collect()
    for x in colsList:
        log.info(x)