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

- *Residual Sum of Square:* The residual sum of squares (RSS) is a statistical technique used to measure the amount of variance in a data set that is not explained by a regression model itself. Instead, it estimates the variance in the residuals, or error term.

- *Skewness and kurtosis:* Skewness defines the alignment of the bell curve while kurosis measures the tailness of the distribution. We need to measure them as most learning algorithms works best with normal distribution.

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



Skewness and kurtosis
Now, as we know that skewness is bad for our data and many machine learning algorithms prefer or perform better when numerical data has a normal distribution we need a way to remove this skewness, to do so in python most frequently used methods are PowerTransformer and QuantileTransformer. Both these methods are used to get a normal or Gaussian-like distribution. Now let us see how to use these methods with an example:

### Data Cleaning

Data cleaning is one of the important parts of machine learning. It plays a significant part in building a model. It surely isn’t the fanciest part of machine learning and at the same time, there aren’t any hidden tricks or secrets to uncover. We discuss some data cleaning techniques in the subsections below:

##### Remove Noise

Noise is unwanted data items, features or records which don’t help in explaining the feature itself, or the relationship between feature & target. Noise often causes the algorithms to miss out patterns in the data. Some techniques that can be used to remove noise are given below.

*Duplicates:* Data analysis is analyzing Duplicate Values and removing them. Pandas drop_duplicates() method helps in removing duplicates from the data frame.

*Paragraph Columns:* Sometimes columns can be can have large number of charecters which can be splitted into other columns. By splitting them we can extract some meaningful data from it.

*Erroneous Values:* Errors in the data must be removed. If the data is downloaded from a database as a query, the result is likely to include erroneous data because of the lack of database integrity. Erroneous data must be filtered using a priori knowledge of the problem domain and common sense. For example, in databases, missing values are usually presented as zeros. Zeros are typical errors due to the lack of database integrity. These kind of errors show up in the probability density function presentation as peaks at zero possibly outside the normal range of the variable. In the case of uncertainty, these kind of values can be replaced with 'don't care' values.

*Contradictions:*  Contradictory data undermines the soundness of the information from a noisy dataset. If same inputs result in two different outputs then this indicates contradictions.

*Mislabels:* When a sample can have exactly one label (or class), and a subset of samples in the dataset are mislabeled, we need to apply some techniques to remove them. It has been observed that mislabeled data ofen results in misguiding the classifier to a wrong model ajustment.

##### Missing Values

Missing data is always a problem in real life scenarios. In machine learning and data mining, we face severe issues in the accuracy of their model predictions because of poor quality of data caused by missing values. Some techniques to resolve this problem are listed below:

*Delete:* Most easiest way to deal with missing values is to remove the rows containing missing values.

*Mean/Mode/Median Imputation:* Missing values can be imputed with a provided constant value, or using the statistics (mean, median or most frequent) of each column in which the missing values are located. This type of imputation algorithm is univariate.

*Prediction Model:* We can use models for each feature with missing values as a function of other features, and uses that estimate for imputation. It does so in an iterated round-robin fashion: at each step, a feature column is designated as output y and the other feature columns are treated as inputs X. A regressor is fit on (X, y) for known y. Then, the regressor is used to predict the missing values of y. This is done for each feature in an iterative fashion, and then is repeated for max_iter imputation rounds. The results of the final imputation round are returned.

*KNN Imputation:* We can fill in missing values using the k-Nearest Neighbors approach. By default, a euclidean distance metric that supports missing values is used to find the nearest neighbors. Each missing feature is imputed using values from n_neighbors nearest neighbors that have a value for the feature. We can also use tree based imputation to fill in missing values.

##### Outliers

In statistics, an outlier is an observation point that is distant from other observations. We can detect outliers using plots like box plots or using z score (if z value > 3 then it is a outlier). Some methods of handling outliers are given below:

*Cut-Off or Delete:* We can use z score or IQR score to cut off or delete the values which are outliers.

*Natural Log:* We can deal with outliers by transforming the distribution. For example, in a distribution that has all positive scores and high outliers, a logarithmic transformation is often effective. Rank transform can also be used for transformation.

*Binning:* Binning can smooth a sorted data value by consulting its “neighborhood”, that is, the values around it. We can use either distance or frequency to discritize the column data to reduce outliers.

*Assign Weights:* We can penalize outliers by increasing weights for them when it comes to models.

*Mean/Mode/Median Imputation:* To impute the outliers, we can use a variety of imputation values (mean/median/mode), ensuring that no data is lost.

*Build Predictive Model:* Models like EllipticEnvelope and IsolationForest could be useful in outlier correction.

*Treat them separately:* The other method of treating outliers is to have them as a separate class of data and to treat them separately and build a model specifically for outliers.

##### Variable Transformation

Variable transformation is a way to make the data work better in your model. Data variables can have two types of form: numeric variable and categorical variable, and their transformation should have different approaches.

- Numeric Variable Transformation is turning a numeric variable to another numeric variable. Typically it is meant to change the scale of values and/or to adjust the skewed data distribution to Gaussian-like distribution through some “monotonic transformation”. Decision tree-based models are less sensitive to scale and skew than these techniques may not contribute a lot, but for other models (e.g. neural net, SVM, linear model etc.), they could be a game changer, or for some cases even mandatory, such as the case you use penalization terms with L1/L2 norm.

- Categorical Variable Transformation is turning a categorical variable to a numeric variable. Categorical variable transformation is mandatory for most of the machine learning models because they can handle only numeric values. It is also called encoding, or in text mining, embedding is also meant to handle similar situation but embedding is usually suppose to return numeric values containing semantics of original data. Categorical variable transformation is important for any models and its selection matters a lot for model performance.

Firstly, we discuss on variable transformation on continuous variables. They are listed below:

*Standardization:* The most typical numeric variable transformation is transforming the column values to another set of values with mean=0 and standard deviation=1

*Min-max scaling:* Min-max scaling is another usual suspect of the simple numeric variable transformations. With min-max scaling, values are to be converted to the values within 0 to 1.

*Logarithmic transformation:* When the value distribution has long-tailed distribution (e.g. individual incomes, individual medical costs, etc.), logarithmic transformations may adjust data distribution to less skewed — hopefully, Gaussian-like distribution.

*Box-Cox transformation:* Box-Cox transformation is the transformation between log(x) transformation and x-1 transformation depending on the value of lambda. PowerTransformer in scikit-learn preprocessing module can handle this transformation and automatically select lambda to make the data the most Gaussian-like.

*Yeo-Johnson transformation:* Yeo-Johnson transformation is the transformation that allows negative value as original value, unlike Box-Cox transformation. With lambda=1, the transformation is an almost identity transformation. Change in lambda affects the transformed value as the graph below shows. As well as Box-Cox transformation, PowerTransformer in scikit-learn preprocessing module can handle this transformation and automatically select lambda to make the data the most Gaussian-like.

*Clipping:* Clipping is an approach to cap or floor the values at specific value points. This can remove the outliers, at the cost of possible loss of raw data information. Clipping can be easily done by pandas or numpy clip function.

*Binning:* In Binning, we group values to distinct intervals and use the group index as a categorical variable. We may use it as an ordinal categorical variable or a numeric variable as rank.

*Rank:* Turning the raw numeric values to ranks of values. Ranks can be also turned to values between 0 and 1 with dividing by number of records, which makes the transformed amounts irrelevant to the number of records.

*RankGauss:* RankGauss is an approach to turn the values to ranks first and turn the ranks to another value following Gaussian distribution.

*Square / Cube root:* A square root transformation can be useful for normalizing a skewed distribution and transforming a non-linear relationship between 2 variables into a linear one. We do this by applying square root or cube root on the variable. When we apply a square root transformation to a variable, high values get compressed and low values become more spread out. Log transformation does the same thing but more aggressively.  

*Dummies:* A dummy variable is one that takes only the value 0 or 1 to indicate the absence or presence of some categorical effect that may be expected to shift the outcome. They can be thought of as numeric stand-ins for qualitative facts in a regression model, sorting data into mutually exclusive categories (such as smoker and non-smoker). We can use variable transform to create dummies.

Next we discuss about discrete variable transformations. They are given below:

*One-hot encoding:* One-hot encoding is an approach to convert one categorical column to multiple binary (0 or 1) columns as many as the number of distinct levels in the original column. If there are four levels on the categorical variable, one-hot encoding will create four new columns, each of which has 0 or 1 and represents if the original column has the level.

*Label encoding:* Label encoding is an approach to convert the levels to integers e.g. levels: [‘A’, ‘B’, ‘C’, …] to integers: [0, 1, 2, …].

*Feature hashing:* Feature hashing is an approach to convert one categorical column to multiple columns using hashing tricks. You can define the number of new columns you convert to, which can be fewer than the number of levels in categorical columns. Instead of assigning 0 or 1 like one-hot encoding, feature hashing uses more than two values.

*Binary encoding & BaseN encoding:* Binary encoding is an approach to turn the categorical column to multiple binary columns while minimizing the number of new columns. First, turn the categorical value to integers by some orders (e.g. alphabetical order or order of appearance for the top row). Next, turn it to binary digit such that 1 to 1, 2 to 10, 5 to 101, etc. Finally, split the binary digit into separate columns each of which has a single digit. BaseN encoding is the generalization of binary encoding in a sense that, instead of using base 2, BaseN uses an arbitrary number as the base.

*Frequency encoding:* Frequency encoding is an approach to transform the categorical column to a new column with integers representing the frequencies of the levels in the original column. This may work well when the frequency of the levels is influential to the target variable.

*Target encoding:* Target encoding is an approach to transform the categorical column to a new numeric columns based on values of target variable.


### Feature Creation

Sometimes, just selecting features from what we have isn't enough. We can create features in different ways from features we already have. The one-hot encoding method we have previously discussed is an example of this. Creating new features may seem unnecessary and to have no clear benefit—after all, the information is already in the dataset and we just need to use it. However, some algorithms struggle when features correlate significantly, or if there are redundant features. They may also struggle if there are redundant features. So we use some techniques to create them. They are discussed in the sections below:

##### Indicator Features

Indicator features are feature that are created out of other features that indicate a certain event (ex. if ticket price is above certain level we can take it as high otherwise low) . We can create an indicator variable using the following mechanism.

- Threshold: We can create a variable which the result of putting a threshold on the original feature. (ex. below certain price = poor)
- Combination of features: We can create a feature out of the result of certain conditions (ex. premium house if 2B,2Bth)
- Special Events: If there are some events or anomalies then we can use that to create a new feature. (ex. christmas day or blackfriday)
- Event Type: If a combination of features can mean something then we can use that to create a feature. (ex. paid vs unpaid based on traffic source)

##### Representation Features

Sometimes we cannot use the data as we have in raw format. We need to convert it so that our algorithms understand the features while training. Some features that can be created in this category is given below:

- Domain and Time Extractions: Traditional ml algorithm cannot interpret data or time as a unit object. We convert them into some meaningful numerical format so that it can be used further. (ex.purchase_day_of_week)
- Numeric to Categorical: We sometimes might want to convert a continuous variable into a discrete one to have much more clarity. (ex. years in school to “elementary”)
- Grouping sparse classes: Sometimes less frequent values do contribute to outliers and might need to group them to something. This transformation results in creating a new feature. (ex. sold, all other are “other”)

##### Interaction Features

Sometimes a combination of features using a certain formulation can add more meaning to the learning of the model. There are some techniques that are described below:

- Sum of Features: A new feature is created from summation of some existing features
- Difference of Features: A new feature is created from calculating difference of some existing features
- Product of Features: A new feature is created from computing product of some existing features
- Quotient of Features: A new feature is created from calculating quotient of some existing features
- Unique Formula: A new feature is created from a unique equation formed by the participation of some existing features

##### Conjunctive Features



    Markov Blanket
    Linear Predictor

##### Disjunctive Features

    Centroid
    PCA
    LDA
    SVD
    PLS

##### Programming

TODO: Need to explore on this

    Logic (FRINGE)
    Genetic


A.1
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

A.1
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
Dimentionality Reduction
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

##### References

https://www.mygreatlearning.com/blog/introduction-to-multivariate-analysis/
https://towardsdatascience.com/catalog-of-variable-transformations-to-make-your-model-works-better-7b506bf80b97
https://scikit-learn.org/stable/modules/preprocessing.html#preprocessing
https://developers.google.com/machine-learning/crash-course/representation/feature-engineering
