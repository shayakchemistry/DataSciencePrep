# Dataframe examples

# Creating a dataframe and accessing it
df1 <- data.frame(id=c(1:5),
                  name=c("A", "B", "C", "D", "E"))
str(df1) # Structure of the dataframe
summary(df1) # Summary of the dataframe

print(df1[1:3,]) # Access 1 to 3 rows
print(df1$name) # Using $ opeator
print(df1[c(2,4),1]) # Another way to access this

df2 <- data.frame(id=6,name="F")
df1 <- rbind(df1,df2) # Way to add rows
print(df1)

# Reading from a file and putting it to a data frame
print(getwd()) # Print the present working directory
df2 <- read.csv("./Dataframe/titanic.csv")
str(df2)
summary(df2)
print(head(df2)) # Printing head
print(dim(df2)) # Gets the dimension

# Using the $ symbol
print(mean(df2$PassengerId))
print(head(df2[df2$PassengerId > 1100,]))

# Sorting
print(head(df2[order(df2[,"Pclass"]),]))

# Merge/Join

df3 = data.frame(CustomerId = c(1:6), Color = c(rep("Blue", 3), rep("Red", 3)))
df4 = data.frame(CustomerId = c(2, 4, 6), Gender = c(rep("Male", 2), rep("Female", 1)))

print(merge(x = df3, y = df4, by = "CustomerId", all = TRUE)) # Outer join

print(merge(x = df3, y = df4, by = "CustomerId", all.x = TRUE)) # Left outer

print(merge(x = df3, y = df4, by = "CustomerId", all.y = TRUE)) # Right outer

print(merge(x = df3, y = df4, by = NULL)) # Cross join

# Dropping columns

df5 <- data.frame(x=1:10, y=10:1, z=rep(3,10))
print(df5)
keepCols <- c("x","y") # We need to drop z
print(df5[ , keepCols, drop = TRUE])

# NA removal
print(head(df2))
print(dim(df2))

clean_df2 <- df2[complete.cases(df2),] # Partial
print(dim(clean_df2))
print(head(clean_df2))

clean_df2 <- df2[na.omit(df2$SibSp),] # Full
print(dim(clean_df2))
print(head(clean_df2))


# Select multiple columns
library("dplyr")
print(df2 %>% select(Pclass, Name, Sex))
# OR
print(select(df2,Pclass, Name, Sex))

# Filtering of dataframes

print(df2[df2$Sex %in% c("male"),]) # Index conditions 

# OR

print(filter(df2, Sex %in% c("male"))) # Filter function from dplyr

# Discover Missing values

df6 <- data.frame(col1=c(1, NA, NA, 4, 5),
                 col2=c(6:10),
                 col3=rep(8,5))

print(df6)
df6$col1[is.na(df6$col1)] <- mean(df6$col1, na.rm=TRUE) # Replacing it with mean value
print(df6) # Mean can also be done by dplyr package


# Visualizing With Qplot
library(ggplot2)
qplot(data = df2,x=Age,fill=Sex) # Example plot the age with respect to gender


