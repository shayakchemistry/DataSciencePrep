# Decision Statement example

# IF statement example
var1 <- 30L

if (is.integer(var1)) {
  print("var1 is of type integer")
}


# IF .... ELSE example
vec2 <- c(1, 2, 3)
if (2 %in% vec2) {
  print("2 is in vector")
} else if (3 %in% vec2) {
  print(3 %in% vec2)
} else {
  print("Nothing")
}


# Switch statement

res1 <- switch(2, "red", "blue", "green")
print(res1)

res2 <- switch("num", "col" = 4, "row" = 99, "num" = 73)
print(res2)

# If switch doesn't find value it will return NULL
res2 <- switch("num1", "col" = 4, "row" = 99, "num" = 73)
print(res2)

# Existence check example

print(exists("res2"))
print(exists("res423"))
