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

# Layers


# Statistical Transformation

plt2 <- ggplot(df1,aes(x=Age))
plt2

plt2 + geom_histogram(binwidth = 1) 
# To map an aesthetic to one of the new stat variables, surround it with ..
plt2 + geom_histogram(aes(y=..density..)) 

plt2 + stat_bin(geom="bar") # Same as plt2 + geom_histogram as stat_bin gives binning result
plt2 + stat_bin(geom="area")
plt2 + stat_bin(geom="point")
plt2 + stat_bin(geom="line")

plt2 + stat_smooth(aes(y=Pclass))

# Facets

plt3 <- ggplot(df1)

plt3 + geom_point(aes(x=Age,y=Fare)) + facet_wrap(~ Sex, nrow=1)

plt3 + geom_point(aes(x=Age,y=Fare)) + facet_grid(Pclass ~ Embarked)

# Coordinates

plt4 <- ggplot(df1, aes(x=Age,y=Fare, color=Sex))
plt4 + geom_point() + geom_smooth() + coord_cartesian()

# Themes

theme_test() # Sample test theme
plt5 <- plt4 + geom_point() + geom_smooth() + coord_cartesian()
plt5 + theme_bw()
plt5 + theme_dark()
