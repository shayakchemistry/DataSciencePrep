## Data Exploration and Preparation

Data exploration and preparation is the step that essential beefore we can put the data to the ML model. In this stage we do explore the data to find relationships, clean the data and prepare features that we can directly use them to the model. We do divide them into the following subsections and are discussed below:

- Data Exploration
- Data Cleaning
- Feature Creation
- Feature Selection

### Data Exploration

Data exploration is a key aspect of data analysis and model building. Without spending significant time on understanding the data and its patterns one cannot expect to build efficient predictive models. Data exploration takes major chunk of time in a data science project comprising of data cleaning and preprocessing. We will go through the following stages in data exploration:

- Variable Identification
- Uni-variate Analysis
- Bi-variate Analysis
- Multi-variate Analysis

Each of them is explored in the follwoing subsections:

##### Variable Identification

Firstly before we do any analysys we need to know the actual goal of the task. In this exericse we need to first identify the target variable and the predictor variables. This would give us a clear understanding of the division beween the one to predict and one used for prediction. Next we perform some descriptive analysis on the variables (columns) to understand the context and datatype of the values. They are given as follows:

- *Context of target variable:* From the business context we need to understand the relationship between the target and the predictor variable. This could only be given in the context of the problem statement and not on general terms.

- *Unique value count:* One of the first things which can be useful during data exploration is to see how many unique values are there in categorical columns. This gives an idea of what is the data about.

- *Frequency count:* Frequency count is finding how frequent individual values occur in column.

- *Variance:* When it comes to analysing numeric values, some basic information such as minimum, maximum and variance are very useful. Variance gives a good indication how the values are spread.

- *Variable types:* Variable types in terms of the type of data it contains and variability is important to the next steps that we will be performing next to understand more into the data. This will categorize the data into some unique categories on which we can do analysis.

##### Uni-variate Analysis

Univariate analysis is referred to the analysis of one variable. The purpose of univariate analysis is to understand the distribution of values for a single variable. We can do this using the following measures:

- *Pareto Analysis:* Pareto analysis is a creative way of focusing on what is important. A Pareto chart is a bar graph. The lengths of the bars represent frequency or cost (time or money), and are arranged with longest bars on the left and the shortest to the right. In this way the chart visually depicts which situations are more significant. It is generally used when analyzing data about the frequency of problems or causes in a process or there are many problems or causes and we want to focus on the most significant.
- *Histogram:*Histogram are one of the data scientists favourite data exploration techniques. It gives information on the range of values in which most of the values fall. It also gives information on whether there is any skew in data.
- *Central Tendency:* Measures of central tendency help you find the middle, or the average, of a data set. The 3 most common measures of central tendency are the mode, median, and mean. They also indicate the skewness of the data. It is mostly performed on numeric data.
- *Spread of distribution:* Spread of the distribution denotes the value space where all the elements do appear. We can use various plots to understand the spread of the distribution. They are mentioned below:
  - *Boxplot:* A boxplot is a plot that shows the five-number summary of a dataset. The five-number summary includes:
    - The minimum value
    - The first quartile
    - The median value
    - The third quartile
    - The maximum value

  - *Density Curve:* A density curve is a curve on a graph that represents the distribution of values in a dataset. It’s particularly useful for visualizing  the “shape” of a distribution, including whether or not a distribution has one or more “peaks” of frequently occurring values and whether or not the distribution is skewed to the left or the right.

##### Bi-variate Analysis

Bi-variate Analysis finds out the relationship between two variables. Here, we look for association and disassociation between variables at a pre-defined significance level. We can perform bi-variate analysis for any combination of categorical and continuous variables. The combination can be: Categorical & Categorical, Categorical & Continuous and Continuous & Continuous. Different methods are used to tackle these combinations during analysis process. We have listed some of the methods below:

- *Correlation of Continuous Variables:* The term correlation refers to a mutual relationship or association between two things. In terms of variables, it is useful to express something in terms of its relationship with others. Finding correlation is very useful in data exploration, as it gives an idea on how the columns are related to each other. One of the best way to visualize it is using heatmap. Once we have visualised correlation heat-map, the next step is to see the correlation trend between two specific numeric columns. This would give us a more focused view in relationship between two variables.
- *Two way Table:* We can start analyzing the relationship between categorical variables by creating a two-way table of count and count percentage. The rows represents the category of one variable and the columns represent the categories of the other variable.
- *Stacked Column Chart:* Stacked column chart is more of a visual form of Two-way table.
- *Chi-Square Test for Categorical values:* This test is used to derive the statistical significance of relationship between the variables. Also, it tests whether the evidence in the sample is strong enough to generalize that the relationship for a larger population as well. Chi-square is based on the difference between the expected and observed frequencies in one or more categories in the two-way table. It returns probability for the computed chi-square distribution with the degree of freedom.
- *Cramer-V correlation between all Categorical values:* Cramer-V is a very useful data exploration technique to find the correlation between categorical variables. And the result of Cramer-V can also be visualised using heat-map.
- *Z-Test for Categorical vs Continuous values:*  Z test test assess whether mean of two groups are statistically different from each other or not. If the probability of Z is small then the difference of two averages is more significant. Also ANOVA can also be used to measure the relationship between variables.
- *Clustering or Segmentation:* Grouping things together allows us to have that high-level perspective. Groups of data allows us to first look at the groups rather than individual data point.  In data science terminology, the process of grouping is also called clustering or segmentation. And making segments is an excellent data exploration technique as it gives an very good overview of data.
- *Outliers:* Outliers represent something unusual, rare , anomaly or something exceptional. Outliers does not necessarily mean something negative. Outlier analysis helps tremendously to enhance the quality of exploratory data analysis. Outlier values in numeric columns can be obtained by various techniques such as standard deviation analysis, or algorithms such as Isolation forest. An outlier overview analysis gives overview of outliers in all numeric columns.

##### Multivariate Analysis

Multivariate analysis is a Statistical procedure for analysis of data involving more than one type of measurement or observation. It may also mean solving problems where more than one dependent variable is analyzed simultaneously with other variables. Multivariate analysis technique can be classified into two broad categories viz., This classification depends upon the question: are the involved variables dependent on each other or not? They are classified into dependence methods and iInterdependence methods. They are discussed below:

*Dependence methods*

Dependence Techniques are types of multivariate analysis techniques that are used when one or more of the variables can be identified as dependent variables and the remaining variables can be identified as independent.

- *Multiple Regression:* Multiple Regression Analysis– Multiple regression is an extension of simple linear regression. It is used when we want to predict the value of a variable based on the value of two or more other variables. The variable we want to predict is called the dependent variable (or sometimes, the outcome, target, or criterion variable). Multiple regression uses multiple “x” variables for each independent variable: (x1)1, (x2)1, (x3)1, Y1)

- *Conjoint analysis:* ‘Conjoint analysis‘ is a survey-based statistical technique used in market research that helps determine how people value different attributes (feature, function, benefits) that make up an individual product or service.  Conjoint analysis techniques may also be referred to as multi-attribute compositional modeling, discrete choice modeling, or stated preference research, and is part of a broader set of trade-off analysis tools used for systematic analysis of decisions.

- *Multiple Discriminant Analysis:* The objective of discriminant analysis is to determine group membership of samples from a group of predictors by finding linear combinations of the variables which maximize the differences between the variables being studied, to establish a model to sort objects into their appropriate populations with minimal error. Discriminant analysis derives an equation as a linear combination of the independent variables that will discriminate best between the groups in the dependent variable. This linear combination is known as the discriminant function. The weights assigned to each independent variable are corrected for the interrelationships among all the variables. The weights are referred to as discriminant coefficients.

- *Linear Probability Model:* Linear probability model (LPM) is a regression model where the outcome variable is binary, and one or more explanatory variables are used to predict the outcome. Explanatory variables can themselves be binary or be continuous. If the classification involves a binary dependent variable and the independent variables include non-metric ones, it is better to apply linear probability models.

- *Multivariate Analysis of Variance and Covariance:* Multivariate analysis of variance (MANOVA) is an extension of a common analysis of variance (ANOVA). In ANOVA, differences among various group means on a single-response variable are studied. In MANOVA, the number of response variables is increased to two or more. The hypothesis concerns a comparison of vectors of group means.  A MANOVA has one or more factors (each with two or more levels) and two or more dependent variables. The calculations are extensions of the general linear model approach used for ANOVA.

- *Canonical Correlation Analysis:* Canonical correlation analysis is the study of the linear relations between two sets of variables. It is the multivariate extension of correlation analysis.

- *Structural Equation Modelling:* Structural equation modeling is a multivariate statistical analysis technique that is used to analyze structural relationships. SEM in a single analysis can assess the assumed causation among a set of dependent and independent constructs i.e. validation of the structural model and the loadings of observed items (measurements) on their expected latent variables (constructs) i.e. validation of the measurement model.

- *Interdependence Technique:* Interdependence techniques are a type of relationship that variables cannot be classified as either dependent or independent. It aims to unravel relationships between variables and/or subjects without explicitly assuming specific distributions for the variables. The idea is to describe the patterns in the data without making (very) strong assumptions about the variables.

*Interdependence methods*

Interdependence techniques are a type of relationship that variables cannot be classified as either dependent or independent. It aims to unravel relationships between variables and/or subjects without explicitly assuming specific distributions for the variables. The idea is to describe the patterns in the data without making (very) strong assumptions about the variables.

- *Factor Analysis:* Factor analysis is a way to condense the data in many variables into just a few variables. For this reason, it is also sometimes called “dimension reduction”. It makes the grouping of variables with high correlation. Factor analysis includes techniques such as principal component analysis and common factor analysis.

- *Cluster analysis:* Cluster analysis is a class of techniques that are used to classify objects or cases into relative groups called clusters. In cluster analysis, there is no prior information about the group or cluster membership for any of the objects.

- *Multidimensional Scaling:* Multidimensional scaling (MDS) is a technique that creates a map displaying the relative positions of several objects, given only a table of the distances between them. The map may consist of one, two, three, or even more dimensions. The program calculates either the metric or the non-metric solution. The table of distances is known as the proximity matrix. It arises either directly from experiments or indirectly as a correlation matrix.

- *Correspondence analysis:* Correspondence analysis is a method for visualizing the rows and columns of a table of non-negative data as points in a map, with a specific spatial interpretation. Data are usually counted in a cross-tabulation, although the method has been extended to many other types of data using appropriate data transformations. For cross-tabulations, the method can be considered to explain the association between the rows and columns of the table as measured by the Pearson chi-square statistic.

https://www.mygreatlearning.com/blog/introduction-to-multivariate-analysis/

### Data Cleaning



##### Remove Noise
##### Missing Values
##### Outliers
##### Variable Transformation


A. Remove Noise:

    Duplicates
    Paragraph Columns
    Erroneous Values
    Contradictions
    Mislabels

B. Missing Values:

    Delete
    Mean/Mode/Median Imputation
    Prediction Model
    KNN Imputation

C. Outliers:

    Cut-Off or Delete
    Natural Log
    Binning
    Assign Weights
    Mean/Mode/Median Imputation
    Build Predictive Model
    Treat them separately

D. Variable Transformation:

    Logarithm
    Square / Cube root
    Binning / Discretization
    Dummies
    Factorization
    Other Data Type



    Correlation of Continuous Variables
    Two-Way Table or Stacked Columns for Categorical
    Chi-Square Test for Categorical
    Z-Test for Categorical vs Continuous
    Correlation Heat-map between all numeric columns
    Pearson Correlation and Trend between two numeric columns
    Cramer-V correlation between all Categorical columns
     Correlation between two specific categorical columns
     Cluster size Analysis
     Clustering or Segmentation
     Outlier overview
     Outlier analysis for individual numeric column
     Outlier analysis for multiple columns
    Specialised Visualisation






 for Continuous
Distribution(levels) for Categorical


Central Tendency & Spread for Continuous
Distribution(levels) for Categorical

- topic 1
- topic 2

 Unique value count
  Unique value count
  Variance
  Pareto Analysis
  Histogram
  Correlation Heat-map between all numeric columns
  Pearson Correlation and Trend between two numeric columns
  Cramer-V correlation between all Categorical columns
   Correlation between two specific categorical columns
   Cluster size Analysis
   Clustering or Segmentation
   Outlier overview
   Outlier analysis for individual numeric column
   Outlier analysis for multiple columns
  Specialised Visualisation

Data Exploration
A. Variable Identification:

    Context of Target Variable (logical connection)
    Data Type per Feature (character, numeric, etc)
    Variable Category (Continuous, Categorical, etc.)

B. Uni-variate Analysis:

    Central Tendency & Spread for Continuous
    Distribution(levels) for Categorical

C. Bi-variate Analysis:

    Correlation of Continuous Variables
    Two-Way Table or Stacked Columns for Categorical
    Chi-Square Test for Categorical
    Z-Test for Categorical vs Continuous

Data Cleaning
A. Remove Noise:

    Duplicates
    Paragraph Columns
    Erroneous Values
    Contradictions
    Mislabels

B. Missing Values:

    Delete
    Mean/Mode/Median Imputation
    Prediction Model
    KNN Imputation

C. Outliers:

    Cut-Off or Delete
    Natural Log
    Binning
    Assign Weights
    Mean/Mode/Median Imputation
    Build Predictive Model
    Treat them separately

D. Variable Transformation:

    Logarithm
    Square / Cube root
    Binning / Discretization
    Dummies
    Factorization
    Other Data Type

Feature Creation

A.1 Dimentionality Reduction
A.2 Encoding
A. Indicator Features

    Threshold (ex. below certain price = poor)
    Combination of features (ex. premium house if 2B,2Bth)
    Special Events (ex. christmas day or blackfriday)
    Event Type (ex. paid vs unpaid based on traffic source)

B. Representation Features

    Domain and Time Extractions (ex.purchase_day_of_week)
    Numeric to Categorical (ex. years in school to “elementary”)
    Grouping sparse classes (ex. sold, all other are “other”)

C. Interaction Features

    Sum of Features
    Difference of Features
    Product of Features
    Quotient of Features
    Unique Formula

D. Conjunctive Features

    Markov Blanket
    Linear Predictor

E. Disjunctive Features

    Centroid
    PCA
    LDA
    SVD
    PLS

F. Programming

    Logic (FRINGE)
    Genetic

Feature Selection
A. Filter Methods

    Correlation
    Statistical Score
    Ranking (Relief Algorithm)

B. Wrapper Methods

    Forward Step Wise
    Backward Step Wise

B. Embedded Methods

    Ridge Regression
    Lasso Regression
    Decision-Trees
    Elastic Net
    XGBoost
    SVM
    LightGBM
