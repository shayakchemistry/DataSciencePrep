## R Project

In this module we will explore the basics concepts of R. We will not get into in depth into topics as it will be covered with other modules. We are going to focus on the following topics:

- Core Programming Concepts
- Vectors
- Matrices
- Data Frames
- Visualization with GGPLOT2
- Advanced R Programming

### Core Programming

In this section we mostly discuss the basics of R programming. We first start with data types in R and then go for logical operators in R and other commonly used programming concepts. They are all discussed in the following subsections.

##### Data Types in R

In any programming language, we need to use various variables to store various information. Variables are nothing but reserved memory locations to store values. This means that, when you create a variable you reserve some space in memory. We do store information of various data types like character, wide character, integer, floating point, double floating point, Boolean etc. Based on the data type of a variable, the operating system allocates memory and decides what can be stored in the reserved memory.In R, the variables are assigned with R-Objects and the data type of the R-object becomes the data type of the variable. There are many types of R-objects of which the frequently used ones are listed below:

- Vectors
- Lists
- Matrices
- Arrays
- Factors
- Data Frames

From this list we first discuss on Vectors. A vector is the most common and basic data structure in R and is pretty much the workhorse of R. Technically, vectors can be one of two types:

- Atomic vectors
- Lists

Although the term “vector” most commonly refers to the atomic types not to lists. We will discuss vectors and lists in a later section. We do focus on atomic vectors in this section. Do note that in R, the c() function returns a vector (a one dimensional array). The atomic vector object is the most simplest type and there are of six data types of them (also termed as six classes of vectors). The other R-Objects are built upon the atomic vectors. They are listed below:

- Logical
- Numeric
- Integer
- Complex
- Character
- Raw

We will discuss List, Matrices and Data Frames in details in a different section. The next type we have is Arrays. An array is a data structure that can hold multi-dimensional data. In R. arrays are the R data objects which can store data in more than two dimensions. For example − If we create an array of dimension (2, 3, 4) then it creates 4 rectangular matrices each with 2 rows and 3 columns. Arrays can store only data type. An array is created using the array() function. It takes vectors as input and uses the values in the dim parameter to create an array. 

The last type we have are Factors. Factors are the data objects which are used to categorize the data and store it as levels. They can store both strings and integers. They are useful in the columns which have a limited number of unique values. Like "Male, "Female" and True, False etc. They are useful in data analysis for statistical modeling. Factors are created using the factor() function by taking a vector as input. All of these are demonstrated in DataTypes.R.

##### Looping in R

A loop statement allows us to execute a statement or group of statements multiple times. It is a statement that allows us to execute a block of code several times. Different variation of loops in R are given below:

- repeat loop
- while loop
- for loop

We do have control statements that can change execution from its normal sequence in a loop. These are known as Loop control statements. There are some loop control statements and are listed below:

- break statement
- continue statement

All of these are demonstrated in Loops.R.

##### Decision Statements

Decision making structures require the programmer to specify one or more conditions to be evaluated or tested by the program, along with a statement or statements to be executed if the condition is determined to be true, and optionally, other statements to be executed if the condition is determined to be false. R provides the following types of decision making statements:

- If statement
- If ... else statement
- Switch statement

Also we we check existence of an entity using the exists() function. They are all demonstrated in Decision.R.

##### Set Operations

Set operations are one of the most used and basic functionality. We can perform set union, intersection, (asymmetric!) difference, equality and membership on two vectors. These operations include the following:

- union(x,y): Union of the sets x and y
- intersect(x,y): Intersection of the sets x and y
- setdiff(x,y): Set difference between x and y, consisting of all elements of x that are not in y
- setequal(x,y): Test for equality between x and y
- c %in% y: Membership, testing whether c is an element of the set y
- choose(n,k): Number of possible subsets of size k chosen from a set of size n

This is demonstrated in Misc.R.

##### Date operations

Dates in R are not treated as a normal string. R provides several options for dealing with date and date/time data. The builtin _as.Date_ function handles dates (without times); the contributed library _chron_ handles dates and times, but does not control for time zones; and the _POSIXct_ and _POSIXlt_ classes allow for dates and times with control for time zones. The general rule for date/time data in R is to use the simplest technique possible. Thus, for date only data, as.Date will usually be the best choice. If you need to handle dates and times, without timezone information, the chron library is a good choice; the POSIX classes are especially useful when timezone manipulation is important. Also, we shouldn't overlook the various "as." functions for converting among the different date types when necessary.

Except for the POSIXlt class, dates are stored internally as the number of days or seconds from some reference date. Thus dates in R will generally have a numeric mode, and the class function can be used to find the way they are actually being stored. The POSIXlt class stores date/time values as a list of components (hour, min, sec, mon, etc.) making it easy to extract these parts. One of the most important thing is to obtain current time. To get this, the Sys.Date function will return a Date object which can be converted to a different class if necessary. We have demonstrated this in Misc.R.

##### Lubridate and Anytime

Date-time data can be frustrating to work with in R. R commands for date-times are generally unintuitive and change depending on the type of date-time object being used. Moreover, the methods we use with date-times must be robust to time zones, leap days, daylight savings times, and other time related quirks, and R lacks these capabilities in some situations. Lubridate makes it easier to do the things R does with date-times and possible to do the things R does not. We have demonstrated it in Misc.R

R excels at computing with dates, and times. Using typed representation for your data is highly recommended not only because of the functionality offered but also because of the added safety stemming from proper representation. But there is a small nuisance cost in interactive work as well as in programming. Users must have told as.POSIXct() about a million times that the origin is (of course) the epoch. Do we really have to say it a million more times? Similarly, when parsing dates that are some form of YYYYMMDD format, do we really have to manually convert from integer or numeric or factor or ordered to character? Having one of several common separators and/or date / time month forms (YYYY-MM-DD, YYYY/MM/DD, YYYYMMDD, YYYY-mon-DD and so on, with or without times), do we really need a format string? Or could a smart converter function do this?

anytime() aims to be that general purpose converter returning a proper POSIXct (or Date) object no matter the input (provided it was somewhat parseable), relying on Boost date_time for the (efficient, performant) conversion. anydate() is an additional wrapper returning a Date object instead. This is demonstrated in Misc.R.

##### Functions in R

A function is a set of statements organized together to perform a specific task. R has a large number of in-built functions and the user can create their own functions. In R, a function is an object so the R interpreter is able to pass control to the function, along with arguments that may be necessary for the function to accomplish the actions. The function in turn performs its task and returns control to the interpreter as well as any result which may be stored in other objects. Also do note that arguments to functions are evaluated lazily, which means so they are evaluated only when needed by the function body. This is demonstrated in Misc.R.

##### Packages in R

The package is an appropriate way to organize the work and share it with others. Typically, a package will include code, documentation for the package and the functions inside, some tests to check everything works as it should, and data sets. Packages in R language are a set of R functions, compiled code, and sample data. These are stored under a directory called “library” within the R environment. By default, R installs a group of packages during installation. Once we start the R console, only the default packages are available by default. Other packages that are already installed need to be loaded explicitly to be utilized by the R program that’s getting to use them. There can be multiple ways to install an package and we do usually install from CRAN. For installing Package from CRAN we need the name of the package and use the following command: install.packages("package name")

*Difference Between a Package and a Library*

There is always a confusion between a package and a library, and we find people calling libraries as packages. 
- library(): It is the command used to load a package, and it refers to the place where the package is contained, usually a folder on our computer.
- Package: It is the collection of functions bundled conveniently. The package is an appropriate way to organize our own work and share it with others.


### Vectors

In this section we will discuss on vectors. We have covered a very brief description of it in the previous section. In this section, we will dig deep into the functionality of vectors. They are all demonstrated in Vectors.R. It is covered in the following sub-sections:

##### Sequences and Repetitions in Vector

In order to avoid repetitiveness and tediously filling the elements of a vector, we may use the seq() and rep() functions. Often, we desire more control over a sequence we are creating than what the : operator will give us. The seq() function serves this purpose and is a generalization of the : operator, which creates a sequence of numbers with a specified arithmetic progression.

R also allows you to easily create vectors containing repetitions with the rep() function. The first parameter is the constant to be repeated, while the second parameter is the number of times.

##### Random numbers, sampling and rounding

One of the most used samples in R are vectors with randomly generated integers. We can create a vector with random integers with the sample() function. This native R function has two obligatory arguments, namely the integers from which you want to sample, and the number of samples you want to take. A third, optional argument, tells R to sample with or without replacement. The other way to get random samples is using probabilistic distribution. This is particularly useful when the observations in our sample can be in decimals. We can use runif() to achieve this.

Round is another important function used in context of vectors. Round function in R, rounds off the values in its first argument to the specified number of decimal places. Round() function in R rounds off the list of values in vector and also rounds off the column of a dataframe. It can also accomplished using signif() function.

##### Formatting numbers

A common task when working with numbers involves computing and displaying them on the screen or on a file. R provides format() function for modifying the format in which we can viewed the formatted numbers. 

##### Filtering data for Vectors

Filtering a vector means getting the values from the vector by removing the others, we can also say that getting the required elements is known as filtering. This can be achieved using the following methods:

- Using %in% operator
- Using condition from the index operator

There is also usage of dplyr package but that is used for data frames. Also do note that operators like all(), any(), which(), subset() are useful for comparisons.

##### Binning

Data binning (or bucketing) is a data pre-processing method used to minimize the effects of small observation errors. The original data values are divided into small intervals known as bins and then they are replaced by a general value calculated for that bin. This has a smoothing effect on the input data and may also reduce the chances of overfitting in the case of small datasets. We can do this using either cut.default() or bincode(). 

##### Operations within a vector

Vectors can contain a sequence of homogeneous types of data type. If mixed values are given then it auto converts the data according to the precedence. There are various operations that can be performed on vectors in R. They are explained below:

*Arithmetic operations:*

We can perform arithmetic operations between 2 vectors. These operations are performed element-wise and hence the length of both the vectors should be the same. Advanced vector arithmetic can be performed using the inbuilt fuctions in packages. Example: crossprod() (Used for cross product between two vectors)

*Element Recycling:*

Recycling occurs when vector arithmetic is performed on multiple vectors of different sizes. R takes the shorter vector and repeats them until it becomes long enough to match the longer one.

*Sorting:*

For sorting we use the sort() function which sorts the vector in ascending order by default.

*Modify:*

We can modify a vector using the assignment operator. We can use the index access techniques to access specific elements and modify them. If we want to truncate the elements, we can use reassignments.

*Deletion:*

We can delete the vector just by assigning the variable to NULL


### Lists

In this section we focus on various aspects of lists. They are discussed in the following subsections:

##### Creating and using Lists

Lists are the R objects which contain elements of different types like − numbers, strings, vectors and another list inside it. A list can also contain a matrix or a function as its elements. List is created using list() function. 

Elements of the list can be accessed by the index of the element in the list. In case of named lists it can also be accessed using the names. We can add, delete and update list elements by accessing its index. It is also possible to merge many lists into one list by placing all the lists inside one list() function.

##### Named list, unlist and other functions

Named list is created with the same function list() by specifying the names of the elements to access them. Named list can also be created using names() function to specify the names of elements after defining the list. 

The unlist() function is used to convert a list to vector in R. The unlist() function takes the list as an argument and returns the Vector. It flattens the list. 

The lapply() function is used to apply function to all list elements. The sapply function is used to apply function to all list elements and convert output to vector. This would result is a much simpler output than that of lapply(). The vapply() function is used to apply function to all list elements and convert output to vector and also needs to specify the output type explicitly.

### Matrices

Matrices are the R objects in which the elements are arranged in a two-dimensional rectangular layout. They contain elements of the same atomic types. Though we can create a matrix containing only characters or only logical values, they are not of much use. We use matrices containing numeric elements to be used in mathematical calculations. A Matrix is created using the matrix() function. In this section, we will dig deep into the functionality of matrices. They are given in the subsection below:

##### Naming Dimensions, Column names and Row names

In matrix it is possible to name dimensions including the column and rows. We can achieve that my passing that off in dimnames. Also rownames() and colnames() functions can be used to modify the row and column names of an existing matrix.

##### Matrix Operations

Operations on matrices can be treated as either the elements of the matrix or the whole matrix as the value to be operated on. There are many such operations and some of them are discussed below:

*Dimension Operation*

The first useful function I want to show you is dim(). dim() tells us about the dimensions of a matrix. The dimensions of a matrix are simply the number of rows and columns. Other useful functions are nrow() for getting number of rows in matrix and ncol() for getting number of columns.

*Arithmetic Operations*

We can perform multiple arithmetic operation on Matrices. They do include addition(+), subtraction(-), scalar multiplication(\*), matrix multiplication (%\*%) and division.

*Transpose Operation*

The transpose of a matrix is simply a flipped version of the original matrix. We can transpose a matrix by switching its rows with its columns. We can perform this using t() function.

*Inverse and Determinant Operations*

The inverse of a square matrix A, sometimes called a reciprocal matrix, is a matrix A^(-1) such that A\*A^(-1)=I, where I is the identity matrix. We can obtain that using the solve() function. 

The determinant of a matrix is the scalar value computed for a given square matrix. We can obtain this using the det() function.

*Computing Column and Row Means*

We can calculate row and column sum using colSums() and rowSums() function.

*Horizontal Concatenation*

We can horizontally concatenate two matrices using cbind() function.

*Vertical Concatenation*

We can vertically concatenate two matrices using rbind() function.

*Common Matrices*

There are various types of matrices that we can create. Some of them are listed below.

- Unit Matrix: Matrix will all elements as 1. Create this using matrix(1, rows, cols)
- Zero Matrix: Matrix will all elements as 0. Create this using matrix(0, rows, cols)
- Diagonal Matrix: Matrix with all elements other than the diagonal elements as 0. Covert a materix to diagonal matrix using diag() function.
- Identity Matrix: Matrix with diagonal elements as 1 and all elements other than the diagonal elements as 0. Create this using diag() function on unit matrix. 

##### Visualizing With Matplot()

Matplot in R is most concise way to superimpose the data series. Matplot plots the columns of a matrix individually as a function of x. We can plot each of the elements in terms of their columns and can distinguish them by coloring them.

##### Subsetting

Subsetting matrices consists on obtaining a subsample of the original matrix, in order to obtain specific elements based on some condition. We can do this in three different ways:
- Using square brackets ([] and [[]] operators).
- Using the dollar sign ($) if the elements are named.
- With functions, like the subset command for conditional or logical subsets.


### Data Frames

##### Introduction

##### Importing data into R

##### Exploring your dataset


##### Using the $ sign


##### Basic operations with a Data Frame


##### Filtering a Data Frame

##### Handling missing values



##### Introduction to qplot


##### Visualizing with Qplot


##### Building Dataframes


##### Merging Data Frames


##### Visualizing With Qplot: Part II

Base Graphics 
Section overview
01:37
Base Graphics basics
02:23
Scatterplot
01:09
Adding plot components
08:13
Legend
01:25
Saving plot components and challenge
02:56
Line plot with secondary Y axis
06:37
Par settings
04:16
Histogram and bar charts
06:09
Box plot
03:29
Dot plot and density plot
05:19
Multiple plots and custom layouts





Advanced visualization with GGPLOT2
Welcome to this section. This is what you will learn!
01:23
Project Brief: Movie Ratings
04:02
Grammars of Graphics ggplot2
Preview11:26
What is a Factor?
07:13
Aesthetics
06:54
Plotting With Layers
05:18
Overriding Aesthetics
07:49
Mapping vs Setting
08:09
Histograms and Density Charts
07:08
Starting Layer Tips
08:41
Statistical Transformations
10:38
Using Facets
09:30
Coordinates
10:28
Perfecting By Adding Themes
11:04
Section Recap
09:50
HOMEWORK: Movie Domestic % Gross
07:05
Advanced Visualization With GGPlot2

Advanced R programming
Intro to stringr
04:54
Sentences, punctuations, strings
05:41
Writing effective functions
06:53
Local and global namespace
12:22
Debugging techniques
##### Memory pre-allocation tactics

09:14
Error handling
07:19
Understanding apply
08:25
lapply, sapply, vapply
04:03
mapply


https://www.udemy.com/course/r-programming-datascience/
