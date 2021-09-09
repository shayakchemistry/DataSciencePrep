# Advanced concepts

# Stringr

library(stringr)
x <- c("why", "video", "cross", "extra", "deal", "authority")
str_length(x) 

str_c(x, collapse = ", ")

str_sub(x, 1, 2)

str_subset(x, "[aeiou]")

str_match(x, "(.)[aeiou](.)")

str_split(c("a,b", "c,d,e"), ",")

# Efficient Functions

library(microbenchmark)
microbenchmark(print("hello world"), cat("hello world\n")) # cat is faster than print

# Local and Global Namespaces

func1 <- function(val1) {
  function(i) {
    val1 <<- val1 + i # use this to reference out of scope object
    return(val1)
  }
}

c1 <- func1(5)
c1(3)
c1(4)

# Debugging techniques

f <- function(x) x + 1
g <- function(x) f(x)
g("a")
traceback()

# Error handling

arg <- 0

div <- function(num, a) {
  if (a == "warning") {
    val <- "It is a warning"
    warning("warning message")
  }
  else if (a == "error") {
    val <- "It is an error"
    stop("error!!")
  }
  else {
    val <- num / as.numeric(a)
  }
  return(val)
}

vl <- tryCatch({
  
  b <- 1
  e <- div(b, arg)
  
},
warning = function(warn) {
  print(paste("MY WARNING: ", warn))
},
error = function(err) {
  print(paste("MY ERROR: ", err))
},
finally = function(f) {
  print(paste("e: ", e))
})
print(paste("Output: ", vl))


