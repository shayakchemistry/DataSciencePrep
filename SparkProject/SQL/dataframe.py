from pyspark.sql import SparkSession
from SparkProject.SQL.lib.logger import Log4J

if __name__ == "__main__":
    spark = SparkSession \
        .builder \
        .appName("Dataframe") \
        .getOrCreate()

    sc = spark.sparkContext
    # Setting log level in spark context.
    spark.sparkContext.setLogLevel("INFO")
    # Getting log object from spark session.
    logger = Log4J(spark)
    logger.info("Spark sql example program.")

    surveyDF = spark.read\
        .option("header", "true")\
        .option("inferSchema", "true")\
        .csv("data/sample.csv")

    surveyDF.createOrReplaceTempView("survey_table")
    countDF = spark.sql("select Country, count(1) as count from survey_table where Age<40 group by Country")

    countDF.show()
