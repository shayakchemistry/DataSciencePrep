# Lists Example

# List creation and access

list1 <- list("Corn", 12.55, c("Sun","Moon"), list(TRUE, TRUE, FALSE))
print(list1)

print(list1[[1]]) # Accessing individual member

list1[[4]][[4]] <- FALSE # Updating the list
print(list1)

#Named Lists
names1 <- c("Name1", "Name2", "Name3","Name4")
names(list1) <- names1
print(list1)

print(list1$Name2) # Access members according to names

# unlist = list to vector
print(unlist(list1)) # This will flatten everything into a vector

# lapply sapply and vapply examples
list2 <- list(c(1,2,3,4),c(5,6,7,8,9))
print(lapply(list2,mean))
print(sapply(list2,mean)) # into a simple vector
print(vapply(list2,mean,numeric(1))) # Need to add in data type
