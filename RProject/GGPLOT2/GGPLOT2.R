# GGPLOT2 Examples

# Importing the library

library(ggplot2)

# Data to be used to plot

df1 <- read.csv("./Dataframe/titanic.csv")
print(head(df1))

# Histogram Plot

plt2 <- ggplot(df1, aes(x = Age)) + geom_histogram(color="darkblue", fill="lightblue")
plt2

# Density Plot

plt1 <- ggplot(df1, aes(x=Age, fill=Sex)) + geom_density(alpha=0.4)
plt1

# Statistical Transformation



