from collections import namedtuple

from pyspark.sql import *
from SparkProject.RDD.lib.logger import Log4J

SurveyRecord = namedtuple("SurveyRecord", ["Age", "Gender", "Country", "State"])

if __name__ == "__main__":
    # Spark session creation
    spark = SparkSession.builder\
        .appName("RDD Operations example")\
        .getOrCreate()
    sc = spark.sparkContext
    # Setting log level in spark context.
    spark.sparkContext.setLogLevel("INFO")
    # Getting log object from spark session.
    log = Log4J(spark)
    log.info("RDD example program.")
    # Reading data from a csv file via textFile method which returns rdd.
    rdd = sc.textFile("data/Lorem.txt")
    log.info("Initial partitions count:")
    log.info(rdd.getNumPartitions())

    # Transformations
    # RDD flatmap transformation
    print("FlatMap: ")
    words = rdd.flatMap(lambda word: word.split(" "))
    words.foreach(lambda l: print(l))

    # Creating a tuple by adding 1 to each word
    print("Tuple: ")
    pairRdd = words.map(lambda w: (w, 1))
    pairRdd.foreach(lambda l: print(l))

    # Filter
    print("Filter: ")
    rdd3 = pairRdd.filter(lambda l: l[0].startswith("a"))
    rdd3.foreach(lambda l: print(l))

    # ReduceBy
    print("ReduceBy: ")
    rdd4 = pairRdd.reduceByKey(lambda a, b: a + b)
    rdd4.foreach(lambda l: print(l))

    # SortByKey
    print("SortByKey: ")
    rdd5 = rdd4.sortByKey()

    # Action
    rdd5.foreach(lambda l: print(l))

    # first
    print("First: ")
    print(rdd5.first())

    result = rdd5.collect()
    for x in result:
        print(x)