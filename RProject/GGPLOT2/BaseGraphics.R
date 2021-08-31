# Base Graphics examples

# Read the data

df1 <- read.csv("./Dataframe/titanic.csv")
print(head(df1))

# Scatter plot

plot(x=df1$Age,y=df1$Pclass)

abline(lm(df1$Pclass ~ df1$Age), col = "blue") # Here ~ is the dependent operator y ~ x = y is dependent on x

# Adding plot components

plot(x=df1$Age,y=df1$Pclass,main = "My Demo Plot", xlab = "Label x",
     ylab = "Label y")

# Legend

legend("bottomright", legend = c("legend1"))

# Saving plot components

jpeg("./GGPLOT2/test_plot1.jpeg")
func1 <- function(sex_type1) {
  if (sex_type1 == "male") {
    return(1)
  } else {
    return(2)
  }
}


color_col1 <- sapply(df1$Sex,func1)
print(head(color_col1))
plot(x=df1$Age, y=df1$Fare, col=color_col1,pch=16) # Adding different color to individual colors
legend("topleft", legend = c("Male","Female"), col=1:2,pch=16)
dev.off()


# Line plot

x_val = 1:10
y1_val = x_val * x_val
y2_val = 2 * y1_val

plot(x = x_val, y = y1_val, type = "b", pch = 18, col = "red", xlab="x", ylab="y")

lines(x=x_val,y=y2_val, type = "b", pch = 18, col="blue", lty=2)

legend("topleft", legend = c("Line1", "Line2"), col = c("red","blue"),
       lty=1:2)


# Par settings

par(mfrow=c(1,2)) # 1 X 2 plotting area
plot(x = x_val, y = y1_val, type = "b", pch = 18, col = "red", xlab="x", ylab="y")
plot(x=df1$Age,y=df1$Pclass,main = "My Demo Plot", xlab = "Label x",
     ylab = "Label y",pch=16)

dev.off()

# Histogram and bar charts

male <- c(apple=22, kiwi=10, grape=15, banana=23, pear=12, orange=18)
female <- c(apple=18, kiwi=5, grape=15, banana=27, pear=8, orange=17)
data1 <- rbind(male, female)

barplot(male, col = "blue")

print(data1)

barplot(data1, col = c("brown1","brown4"),legend.text = rownames(data1),
        args.legend=list(cex=0.75,x = "topright"))

# Box plot

boxplot(df1$Age)

boxplot(Age ~ Fare, data=df1)

# Dot plot and density plot

print(head(mtcars)) # R's default dataset

dotchart(mtcars$mpg, cex = 0.6, labels = row.names(mtcars), pch = 19) # Dot plots
   
# Histogram and density plots 

data2 <- rnorm(100, mean=30, sd=2)
print(head(data2))

hist(data2,col="orange", breaks=20)
hist(data2,col="blue", breaks=50)

d2 <- density(data2)
plot(d2, frame=FALSE)
polygon(d2, col = "steelblue")
