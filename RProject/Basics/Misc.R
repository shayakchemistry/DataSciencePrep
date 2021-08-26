# Other important Misc operations

# Set operations example

set_a <- c(1,2,3,4)
set_b <- c(3,4,5,6)

res1 <- union(set_a, set_b) # Union of the sets a and b
print(res1)

res1 <- intersect(set_a, set_b) # Intersection of the sets a and b
print(res1)

res1 <- setdiff(set_a, set_b) # Set difference between a and b, consisting of all elements of a that are not in b
print(res1)

res1 <- setequal(set_a, set_b) # Test for equality between a and b
print(res1)

res1 <- 1 %in% set_a # Membership, testing whether 1 is an element of the set a
print(res1)
# OR
res1 <- is.element(5, set_a)
print(res1)

res1 <- choose(6, 2) # Number of possible subsets of size 2 chosen from a set of size 6
print(res1)

# Date examples using as.Date, chron, POSIXct and POSIXlt

# Using as.Date
date1 <- as.Date("2010/11/10") 
print(date1)

date1 <- as.Date("2010-11-10") 
print(date1)

date1 <- as.Date("11/09/2010", format="%d/%m/%Y") 
print(date1)

date1 <- as.Date("11-Jan-10", format="%d-%b-%y") 
print(date1)

# Using chron
library("chron")
times1 <- chron(dates="2002-06-09", format=c("y-m-d"))
print(times1)

times1 <- chron(times="12:21:22", format=c("h:m:s"))
print(times1)
typeof(times1)

# Using POSSIXct
date2 <- as.POSIXct("2005-10-21 18:47:22")
print(date2)

# Using POSSIXlt
date2 <- as.POSIXlt("2005-10-21 18:47:22")
print(date2)
names(date2)

# Lubridate example

library("lubridate")
date3  <- dmy("12/09/2101")
print(date3)
month(date3)

# Anytime example
library("anytime")
print(anytime(20160101 + 31)) # Represent dates and time as (possibly fractional) seconds since the ‘epoch’ of January 1, 1970

# Function Example

function_name1 <- function(var1, var2) {
  print(var1)
  print(var2)
  return(typeof(var1))
}

function_name1(12, "HELLO")

# Lazy attribute evaluation in function

function_name1(313) # Won't give an error until var2 is getting evaluated
