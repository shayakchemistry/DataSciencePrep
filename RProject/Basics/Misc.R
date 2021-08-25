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



# Lubridate example

# Anytime example

# Function Example
# Lazy attribute in funxtion
