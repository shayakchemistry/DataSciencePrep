from pyspark.sql import *
from SparkProject.HelloWorld.lib.logger import Log4J

if __name__ == "__main__":
    # Spark session creation
    spark = SparkSession.builder\
        .appName("hello spark")\
        .master("local[*]")\
        .getOrCreate()
    # Setting log level in spark context.
    spark.sparkContext.setLogLevel("INFO")
    # Getting log object from spark session.
    log = Log4J(spark)
    log.info("hello world spark program.")
    # Reading data from a csv file via data frame reader.
    df = spark.read\
        .option("header", "true")\
        .option("inferSchema", "true")\
        .csv("data/sample.csv")
    # Printing the contents of df.
    df.show()
    # Stopping spark session.
    spark.stop()
