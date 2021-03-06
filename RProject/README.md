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

In this section we focus on various aspects of lists. This is demonstrated in Lists.R. They are discussed in the following subsections:

##### Creating and using Lists

Lists are the R objects which contain elements of different types like − numbers, strings, vectors and another list inside it. A list can also contain a matrix or a function as its elements. List is created using list() function. 

Elements of the list can be accessed by the index of the element in the list. In case of named lists it can also be accessed using the names. We can add, delete and update list elements by accessing its index. It is also possible to merge many lists into one list by placing all the lists inside one list() function.

##### Named list, unlist and other functions

Named list is created with the same function list() by specifying the names of the elements to access them. Named list can also be created using names() function to specify the names of elements after defining the list. 

The unlist() function is used to convert a list to vector in R. The unlist() function takes the list as an argument and returns the Vector. It flattens the list. 

The lapply() function is used to apply function to all list elements. The sapply function is used to apply function to all list elements and convert output to vector. This would result is a much simpler output than that of lapply(). The vapply() function is used to apply function to all list elements and convert output to vector and also needs to specify the output type explicitly.

### Matrices

Matrices are the R objects in which the elements are arranged in a two-dimensional rectangular layout. They contain elements of the same atomic types. Though we can create a matrix containing only characters or only logical values, they are not of much use. We use matrices containing numeric elements to be used in mathematical calculations. A Matrix is created using the matrix() function. In this section, we will dig deep into the functionality of matrices. This is demonstrated in Matrix.R. We discuss them in the subsection below:

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
- Diagonal Matrix: Matrix with all elements other than the diagonal elements as 0. Covert a matrix to diagonal matrix using diag() function.
- Identity Matrix: Matrix with diagonal elements as 1 and all elements other than the diagonal elements as 0. Create this using diag() function on unit matrix. 

##### Visualizing With Matplot()

Matplot in R is most concise way to superimpose the data series. Matplot plots the columns of a matrix individually as a function of x. We can plot each of the elements in terms of their columns and can distinguish them by coloring them.

##### Subsetting

Subsetting matrices consists on obtaining a subsample of the original matrix, in order to obtain specific elements based on some condition. We can do this in three different ways:
- Using square brackets ([] and [[]] operators).
- With functions, like the subset command for conditional or logical subsets.


### Data Frames

A data frame is a table or a two-dimensional array-like structure in which each column contains values of one variable and each row contains one set of values from each column. Following are the characteristics of a data frame:

- The column names should be non-empty.
- The row names should be unique.
- The data stored in a data frame can be of numeric, factor or character type.
- Each column should contain same number of data items.

The structure of the data frame can be seen by using str() function.Also the statistical summary and nature of the data can be obtained by applying summary() function. We demonstrate dataframes in Dataframe.R. In this section we dig deep into dataframes and are given by the following subsections:

##### Importing data into Dataframe

In R, we can read data from files stored outside the R environment. We can also write data into files which will be stored and accessed by the operating system. R can read and write into various file formats like csv, excel, xml etc. In R we can use utility functions like read.csv() to read a file and put it to a dataframe. We do use this dataframe to get summary, number of rows / columns and other ways to explore into the dataset.

##### Using the $ sign

$ is an important symbol in context of dataframe. We do use this to access the named indexes in the dataframe.

##### Operations with Data Frame

In Dataframes, we can apply operations on either elements or on the dataframe as a whole. There are many operations that can be applied to dataframe:

*Sort a dataframe*

We can use the order() function directly without resorting to add-on tools.

*Merge/Join data frames*

We can do join / merge by using the merge function and its optional parameters.

*Drop data frame columns by name*

We can drop a column using the filtering and specifying drop=TRUE when filtering out indexes.

*Remove rows with NAs in data.frame*

We can remove NA's using complete.cases() and na.omit() in indexes. We can also use is.na() to check whether an element is an NA.

*Extracting specific columns from a data frame*

Using the dplyr package we can use the select() function to select multiple columns

##### Filtering in Data Frame

Dataframe columns can be subjected to constraints, and produce smaller subsets. However, while the conditions are applied, the following properties are maintained:

- Rows are considered to be a subset of the input.
- Rows in the subset appear in the same order as the original dataframe.
- Columns remain unmodified.
- The number of groups may be reduced, based on conditions.
- Dataframe attributes are preserved during data filter.

There are two ways of filtering dataframes namely:

- Using dataframe indexing 
- Using dplyr library

##### Handling missing values

Often you may want to replace missing values in the columns of a data frame with some meaningful values. The most commonly used are mean or median of a column. Also if the column is a critical one we do often clear the rows that contains NA or NaN.

##### Visualizing With Qplot

qplot is the short form of quick plot in R. The ggplot2 system offers two functions. One is qplot for the quick or faster plotting and another is ggplot, which is for more customized plots. It is a very easy-to-use plotting function. To use this function, you need to install the ‘ggplot2‘ package. We can explore the dataset to understand the datatypes and the data points as well by plotting them off. We do have extensively demonstrated this in Dataframe.R.

### Visualizations with GGPLOT2

In this section we will mostly discuss about plotting graphs in an extensive level. We would start with the base graphics and then move to ggplot2. They are all discussed in the following subsections:

##### Base Graphics 

One of the best parts of R is its plotting capabilities. Most model output has an associated plot method which allows one to quickly visualize the results of an analysis using a consistent interface. Base graphics are the oldest systems in R. Although higher-level graphics packages like lattice and ggplot2, which are built on grid graphics have displaced base graphics, but base graphics do come in handy.

##### Base Graphics Plots

Base R graphics functions (known as high-level plotting functions) can be customized adding legends, texts, grids, modifying the axes, among other functions (known as low-level plotting functions). We can also customize graphical parameters via the arguments of the par function. The latter will allow us to combine plots, change the background color or the margins, for instance. We do discuss them in details below:

*Scatter plot*

A scatter plot can be created using the function plot(x, y). The function lm() will be used to fit linear models between y and x. A regression line can be added on the plot using the function abline(), which takes the output of lm() as an argument. You can also add a smoothing line using the function loess(). 

*Legend*

The legend() function allows adding legends to base R plots. 

*Saving plot components*

It is possible to save plot components by specifying files to save your image using a function such as jpeg(), png(), svg() or pdf(). Additional argument indicating the width and the height of the image can be also used. We then create the plot asn save it to the file using dev.off().

*Line plot*

We can do line plots using plot() function and lines() function. Note that lines() cannot plot without using plot() function. The function has the following parameters:

- x, y: coordinate vectors of points to join
- type: character indicating the type of plotting. Allowed values are:
  - “p” for points
  - “l” for lines
  - “b” for both points and lines
  - “c” for empty points joined by lines
  - “o” for overplotted points and lines
  - “s” and “S” for stair steps
  - “n” does not produce any points or lines
- lty: line types. Line types can either be specified as an integer (0=blank, 1=solid (default), 2=dashed, 3=dotted, 4=dotdash, 5=longdash, 6=twodash) or as one of the character strings “blank”, “solid”, “dashed”, “dotted”, “dotdash”, “longdash”, or “twodash”, where “blank” uses ‘invisible lines’ (i.e., does not draw them).

*Par settings*

We can put multiple graphs in a single plot by setting some graphical parameters with the help of par() function. R programming has a lot of graphical parameters which control the way our graphs are displayed.

The par() function helps us in setting or inquiring about these parameters. For example, you can look at all the parameters and their value by calling the function without any argument.

*Histogram and bar charts*

A histogram is an approximate representation of the distribution of numerical data. We can represent this with bar plots. Bar plots are obtained by using the barplot() function.

*Box plot*

A box plot or boxplot is a method for graphically depicting groups of numerical data through their quartiles. Box plots may also have lines extending from the boxes indicating variability outside the upper and lower quartiles. This is achieved in R using the boxplot() function.

*Dot plot*

A dot plot, also known as a strip plot or dot chart, is a simple form of data visualization that consists of data points plotted as dots on a graph with an x- and y-axis. These types of charts are used to graphically depict certain data trends or groupings. We use dotchart() function in R to do it.

*Histogram and and density plot*

A histogram is the most commonly used graph to show frequency distributions. It looks very much like a bar chart, but there are important differences between them. This helpful data collection and analysis tool is considered one of the seven basic quality tools. We do this using the hist() function.

A Density Plot visualizes the distribution of data over a continuous interval or time period. This chart is a variation of a Histogram that uses kernel smoothing to plot values, allowing for smoother distributions by smoothing out the noise. We do this by using the density() function to calculate the density data and display it using the plot() function.


##### Introduction to ggplot2

ggplot2 also termed as Grammer of Graphics is a free, opensource and easy to use visualization package widely used in R. It includes several layers on which it is governed. The layers are as follows:

- Data: Dataset to be plotted
- Aesthetics: The scale into which the data is mapped to.
- Geometric: The visual elements in the data
- Facets: Plotting small multiples
- Statistics: Representation of the data to aid understanding
- Coordinates: The space on which the data is to be plotted
- Themes: All non data link

Layers with variables of interest are as follows:

- Aesthetics: x axis, y axis, color, fill, size, labels, alpha, shape, line width, line type
- Geometrics: point, line, histogram, bar, boxplot
- Facets: Columns, rows
- Statistics: Binning, smoothing, descriptive, intermediate
- Coordinates: Cartesian, fixed, polar, limits
- Themes: Non data link

We discuss them in the section below:

##### Aesthetics

There are different aesthetics that are used in ggplot2 and are listed below:

- Color and fill: Almost every geom has either color, fill, or both. We can specify colors by it's name or by RGB specification.
- Lines: We can modify lines like colors. The appearance of a line is affected by size, linetype, linejoin and lineend.
- Polygons: The border of the polygon is controlled by the colour, linetype, and size aesthetics as described above. The inside is controlled by fill.
- Point: We use points to represent a data poin tin the chart. They do varry in size, type and color.
- Text: We can varry font face (type) and size accordingly.
- Justification: Justification controlls allignment. Horizontal and vertical justification have the same parameterisation, either a string (“top”, “middle”, “bottom”, “left”, “center”, “right”) or a number between 0 and 1.

##### Histograms and Density Charts

We have explored histogram previously in base graphics. The function geom_histogram() is used to create histogram. 

We have explored Density plots previously in base graphics. The function geom_density() is used to create Density plots. 

##### Building plots by Layers

One of the key ideas behind ggplot2 is that it allows you to easily iterate, building up a complex plot a layer at a time. Each layer can come from a different dataset and have a different aesthetic mapping, making it possible to create sophisticated plots that display data from multiple sources.

##### Statistical Transformations

The Statistical transformation (stat) is often useful to transform your data before plotting, and that's what statistical transformations do. They are used in tandem with Geom (geometric objects) that describe the type of plot produced. Every geom function has a default statistic like geom_histogram = stat_bin + bar, geom_smooth = stat_smooth + ribbon and geom_density = stat_density + ribbon. 

##### Using Facets

The facet approach partitions a plot into a matrix of panels. Each panel shows a different subset of the data. There are two main functions for faceting :

- facet_grid(): Use this function to partition into multiple panels by levels of the group
- facet_wrap(): Facets can be placed side by side using this function

##### Coordinates

The coordinate system of a plot refers to the space on which the data is plotted. The coordinate system of a plot, together with the x and y position scale, determines the location of geoms. Below are the available coordinate options:

- coord_cartesian: This is the default coordinate system (x horizontal from left to right, y vertical from bottom to top)
- coord_flip: Flipped cartesian coordinate system (x vertical from bottom to top, y horizontal from left to right)
- coord_trans: Used to to transform the coordinate system. We, i.e., substitute traditional axes with logarithmic axes and then present the values and statistics
- coord_equal: Ensures the units are equally scaled on the x-axis and on the y-axis
- coord_polar: Polar coordinate system; the x (or y) scale is mapped to the angle (theta)
- coord_map: Various map projections

##### Adding Themes

ggplot2 is remarkably extensible and customizable both through specific graphical components (geom_, scale_, aes, etc) or by theme components (grid lines, background colors, fonts, etc). There is also the concept of fully established themes which change many theme components at once. You can change the entire appearance of a plot by using a custom theme. Jeffrey Arnold has implemented the library ggthemes containing several custom themes. To use these themes install and load ggthemes package.


### Advanced R programming

In this section, we will discuss some helpful topics that we could be useful. They are discussed below.

##### stringr

Strings are not glamorous, high-profile components of R, but they do play a big role in many data cleaning and preparation tasks. The stringr package provide a cohesive set of functions designed to make working with strings as easy as possible. stringr is built on top of stringi, which uses the ICU C library to provide fast, correct implementations of common string manipulations. stringr focusses on the most important and commonly used string manipulation functions whereas stringi provides a comprehensive set covering almost everything.


##### Implementing efficinet  Functions

It is very important to have efficient functions. Each of these blocks do incrementally add up to make a performance impact specially if they are called multiple times. In R, there is a function microbenchmark() that could be used to measure benchmark. It is effective if you do this on a large dataset so that the difference is effectively different.

##### Local and global namespace

Data objects assigned within the body of a function are temporary.  That is, they are local to the function only.  Local objects have no effect outside the function, and they disappear when function evaluation is complete. Local objects are stored in a frame in virtual memory (e.g. RAM). Frame 0 is called the session frame or “global environment” and exists as long as R is operational.  Frame 1 and higher are created to support function execution only.  Each of these frames contain a list of R objects with names and values.  Objects stored in Frame 1 and higher are erased when flow control returns to the Console.  The temporary use of virtual memory implies that functions offer an efficiency advantage over scripts as functions make little to no use of disk or virtual storage.

Data objects that are global are stored in the .Data directory.  As a result, they persist until they are explicitly removed (or the search path is altered).  Scripts the contain no functions and expressions defined in the Console create global objects, they rely on hard disk storage, and they are fundamentally slower to process.

Local objects within functions become permanent or global objects only through the use of the assign() function or the infix operator <<-.  Explicit assignment transfers an object from RAM or virtual memory to the hard-drive.

##### Debugging techniques

A grammatically correct program may give us incorrect results due to logical errors. In case, if such errors (i.e. bugs) occur, we need to find out why and where they occur so that you can fix them. The procedure to identify and fix bugs is called “debugging”. There are a number of R debug functions, such as:

- traceback()
- debug()
- browser()
- trace()
- recover()


##### Error handling

It’s often the case that where we want to write an R script that loops over multiple datasets, or different subsets of a large dataset, running the same procedure over them: generating plots, or fitting a model, perhaps. We set the script running and turn to another task, only to come back later and find the loop has crashed partway through, on an unanticipated error. There are two ways to do this. They are listed below:

- try block
- tryCatch block

##### Understanding apply

The apply command in R allows us to apply a function across an array, matrix or data frame. The apply in R function can be feed with many functions to perform redundant application on a collection of object (data frame, list, vector, etc.). The purpose of apply() is primarily to avoid explicit uses of loop constructs. They can be used for an input list, matrix or array and apply a function. Any function can be passed into apply(). There are some functions derived from this and are given below.

*lapply*

lapply() function is useful for performing operations on list objects and returns a list object of same length of original set. lappy() returns a list of the similar length as input list object, each element of which is the result of applying FUN to the corresponding element of list. Lapply in R takes list, vector or data frame as input and gives output in list.

*sapply*

sapply() function takes list, vector or data frame as input and gives output in vector or matrix. It is useful for operations on list objects and returns a list object of same length of original set. Sapply function in R does the same job as lapply() function but returns a vector.

*vapply*

The vapply function is very similar compared to the sapply function, but when using vapply you need to specify the output type explicitly.

*tapply*

The tapply function is another command of the apply family, which is used for vector inputs.

*mapply*

The mapply() function is a multivariate apply of sorts which applies a function in parallel over a set of arguments. As lapply() iterates over a single R object but if there is a want to iterate over multiple R objects in parallel then mapply() is the function to be needed. mapply gives us a way to call a non-vectorized function in a vectorized way. It is a multivariate version of sapply.


_Please do let me know if I have missed something_

