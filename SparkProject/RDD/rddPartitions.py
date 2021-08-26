from pyspark.sql import *
from SparkProject.RDD.lib.logger import Log4J

if __name__ == "__main__":
    # Spark session creation
    spark = SparkSession.builder\
        .appName("partitions example")\
        .getOrCreate()
    sc = spark.sparkContext
    # Setting log level in spark context.
    spark.sparkContext.setLogLevel("INFO")
    # Getting log object from spark session.
    log = Log4J(spark)
    log.info("creating rdd using parallelize method")
    rdd = sc.parallelize([1, 2, 3, 4, 5, 6, 7, 8, 9])
    log.info("Number of partitions in RDD:")
    log.info(rdd.getNumPartitions())
    result = rdd.collect()
    for r in result:
        log.info(r)
    # Coalesce method can reduce the number of partitions. It avoids full shuffles
    rdd1 = rdd.coalesce(3)
    log.info("After coalesce")
    log.info("Number of partitions in RDD:")
    log.info(rdd1.getNumPartitions())
    result2 = rdd1.collect()
    for r in result2:
        log.info(r)
    # Repartition can either increase or decrease partitions.
    rdd2 = rdd.repartition(5)
    log.info("After repartition")
    log.info("Number of partitions in RDD:")
    log.info(rdd2.getNumPartitions())
    result3 = rdd2.collect()
    for r in result3:
        log.info(r)