
## Statistics

In this section we will mostly deal with statistics. We will start with some basics and then move on to the advanced topics like hypothesis analysis. They are given in the subsections below:

### Statistics Basics

Our life is full of events and phenomena that enhance us to study either natural or artificial phenomena could be studied using different fields and one of them is statistics. We do find the applications of statistics are many and varied forms like while reading newspapers /  magazines or while listening to the radio, or watching television.

Since statistics is used in almost every field of  endeavor, statistics plays an important role in affecting our lives. Statistics is divided into two main areas, which are descriptive and inferential statistics. They are explained in the following subsections.

##### Descriptive Statistics

Suppose that a test in statistics course is given to a class and the test scores for all students are collected, then the test scores for the students are called data set. Usually the data set is very large in the original form and it is not easy to use it to draw a conclusions or to make decisions while it is very easy to draw conclusions from summary tables and diagrams than from such original data. So reducing the data set to form more control by constructing tables, drawing graphs and provide some numerical characteristics for which is a simple definition to introduce descriptive statistics.

##### Inferential Statistics

The set of all elements (observations) of interest in a study is called a population, and the selected numbers of  elements from the population is called a sample. In statistical problems, we may be interested to make a decision and prediction about a population by using results that obtained from selected samples, for instance we may be interested to find the number of absent students on a certain day of a week. To do so, we may select 200 classes and register the number of students that are absent on that day, then we can use this information to make a decision. The area of statistics that interest on such decision is referred to inferential statistics.

##### Numerical summaries

A numerical summary is a number used to describe a specific characteristic about a data set. There are many ways to numerically summarize data. The fundamental idea is to describe the center, or most probable values of the data, as well as the spread, or the possible values of the data. The ways to measure them are given below:

*Mean*
The sample mean, or average, of a group of values is calculated by taking the sum of all of the values and dividing by the total number of values. In other words, for n values x1, x2, x3, ... , xn, the mean = (x1 + x2 + x3 + ... + xn)/n

*Median*
The median of a group of values is the center, or midpoint, of the ordered values. The median is calculated by placing a group of values in ascending order and taking the center observation of the ordered list, such that there are an equal number of values above and below the median (for an even number of observations, one may take the average of the two center values).

*Quartiles*
The first quartile of a group of values is the value such the 25% of the values fall at or below this value. The third quartile of a group of values is the value such that 75% of the values fall at or below this value. The first quartile may be approximately calculated by placing a group of values in ascending order and determining the median of the values below the true median, and the third quartile is approximately calculated by determining the median of the values above the true median. For an odd number of observations, the median is excluded from the calculation of the first and third quartiles. The distance between the first and third quartiles is known as the Inter-Quartile Range (IQR).

*Variance and Standard Deviation*
The variance of a group of values measures the spread of the distribution. A large variance indicates a wide range of values, while a small variance indicates that the values lie close to their mean. The variance s² is calculated by summing the squared distances from each value to the mean of the values, then dividing by one fewer than the number of observations. The standard deviation s is the square root of the variance. The formula for variance is given as:

![Varience Formula](resources/var_formula.gif)

### Central Tendency

Central tendency is a descriptive summary of a dataset through a single value that reflects the center of the data distribution. Along with the variability (dispersion) of a dataset, central tendency is a branch of descriptive statistics. It can only delivers a comprehensive summary of the whole dataset. There are measures of central tendency. They are given below:

- Mean (Average): Represents the sum of all values in a dataset divided by the total number of the values.
- Median: The middle value in a dataset that is arranged in ascending order (from the smallest value to the largest value). If a dataset contains an even number of values, the median of the dataset is the mean of the two middle values.
- Mode: Defines the most frequently occurring value in a dataset. In some cases, a dataset may contain multiple modes, while some datasets may not have any mode at all.

##### Skewness

The preferred measure of central tendency often depends on the shape of the distribution. Of the three measures of tendency, the mean is most heavily influenced by any outliers or skewness. In a symmetrical distribution, the mean, median, and mode are all equal. In these cases, the mean is often the preferred measure of central tendency.

Skewness refers to a distortion or asymmetry that deviates from the symmetrical bell curve, or normal distribution, in a set of data. If the curve is shifted to the left or to the right, it is said to be skewed. Skewness can be quantified as a representation of the extent to which a given distribution varies from a normal distribution. All three types of skewness are illustrated below:

![No Skewness](resources/NoSkew.PNG)

![Left Skewness](resources/LeftSkew.PNG)

![Right Skewness](resources/RightSkew.PNG)

Measurement of skewness is also important. There are several ways to measure skewness. Pearson’s first and second coefficients of skewness are two common ones. Pearson’s first coefficient of skewness, or Pearson mode skewness, subtracts the mode from the mean and divides the difference by the standard deviation. Pearson’s second coefficient of skewness, or Pearson median skewness, subtracts the median from the mean, multiplies the difference by three, and divides the product by the standard deviation. They are illustrated as:

![Pearson Skewness](resources/PearsonSkewness.PNG)

### Relationship with variables

When we consider relationships among variables we take into account, we generally consider that there is atleast a predictor X and a response Y. This relationship can take on different forms, of course, like a line or a curve, but there’s really only one relationship here to measure. In this we measure how the data is spread out and relation among variables that are present in the dataset with various measures. They are given in the following subsections.

##### Covariance

In statistics, we have been interested in understanding the relationship between one or more explanatory variables (also called independent variable or a predictor variable) and a response variable (also called dependent variable or an outcome variable). However, occasionally there may be other variables that can affect the response variable that are not of interest. These variables are known as covariates.

For example, suppose researchers want to know if three different studying techniques lead to different average exam scores at a certain school. The studying technique is the explanatory variable and the exam score is the response variable. However, there’s bound to exist some variation in the student’s studying abilities within the three groups. If this isn’t accounted for, it will be unexplained variation within the study and will make it harder to actually see the true relationship between studying technique and exam score. One way to account for this could be to use the student’s current grade in the class as a covariate. It’s well known that the student’s current grade is likely correlated with their future exam scores. Thus, although current grade is not a variable of interest in this study, it can be included as a covariate so that researchers can see if studying technique affects exam scores even after accounting for the student’s current grade in the class.

In statistics, we are also interested in a measure of relationship between two variables. Keeping covariates aside we want to evaluate to what extent that those variables has a chance together. This measure is given by covariance. It is essentially a measure of the variance between two variables. However, the metric does not assess the dependency between variables.

Covariance is measured in units. The units are computed by multiplying the units of the two variables. The variance can take any positive or negative values. The values are interpreted as follows:

- Positive covariance: Indicates that two variables tend to move in the same direction.
- Negative covariance: Reveals that two variables tend to move in inverse directions.

The covariance formula deals with the calculation of data points from the average value in a dataset. For example, the covariance between two random variables X and Y can be calculated using the following formula (for population):

![Covariance population](resources/covariance_population.png)

For sample covariance, the formula looks like:

![Covariance sample](resources/covariance_sample.png)

![Covariance Ref](resources/covariance_ref.PNG)

##### Analysis of Variance (ANOVA)

Analysis of variance (ANOVA) is an analysis tool used in statistics that splits an observed aggregate variability found inside a data set into two parts: systematic factors and random factors. The systematic factors have a statistical influence on the given data set, while the random factors do not. Analysts use the ANOVA test to determine the influence that independent variables have on the dependent variable in a regression study. The ANOVA coefficient can be calculated as:

![ANOVA formula](resources/ANOVA.PNG)

The ANOVA test is the initial step in analyzing factors that affect a given data set. Once the test is finished, an analyst performs additional testing on the methodical factors that measurably contribute to the data set's inconsistency. The analyst utilizes the ANOVA test results in an f-test to generate additional data that aligns with the proposed regression models. The ANOVA test allows a comparison of more than two groups at the same time to determine whether a relationship exists between them. The result of the ANOVA formula, the F statistic (also called the F-ratio), allows for the analysis of multiple groups of data to determine the variability between samples and within samples. If no real difference exists between the tested groups, which is called the null hypothesis, the result of the ANOVA's F-ratio statistic will be close to 1. The distribution of all possible values of the F statistic is the F-distribution. This is actually a group of distribution functions, with two characteristic numbers, called the numerator degrees of freedom and the denominator degrees of freedom.

There are two main types of ANOVA: one-way (or unidirectional) and two-way. There also variations of ANOVA. For example, MANOVA (multivariate ANOVA) differs from ANOVA as the former tests for multiple dependent variables simultaneously while the latter assesses only one dependent variable at a time. One-way or two-way refers to the number of independent variables in your analysis of variance test. A one-way ANOVA evaluates the impact of a sole factor on a sole response variable. It determines whether all the samples are the same. The one-way ANOVA is used to determine whether there are any statistically significant differences between the means of three or more independent (unrelated) groups. A two-way ANOVA is an extension of the one-way ANOVA. With a one-way, you have one independent variable affecting a dependent variable. With a two-way ANOVA, there are two independents. For example, a two-way ANOVA allows a company to compare worker productivity based on two independent variables, such as salary and skill set. It is utilized to observe the interaction between the two factors and tests the effect of two factors at the same time.

##### Correlation

Correlation is a statistical measure that expresses the extent to which two variables are linearly related (meaning they change together at a constant rate). It’s a common tool for describing simple relationships without making a statement about cause and effect. Correlations are useful for describing simple relationships among data. For example, imagine that you are looking at a dataset of campsites in a mountain park. You want to know whether there is a relationship between the elevation of the campsite (how high up the mountain it is), and the average high temperature in the summer. For each individual campsite, you have two measures: elevation and temperature. When you compare these two variables across your sample with a correlation, you can find a linear relationship: as elevation increases, the temperature drops. They are negatively correlated.

We describe correlations with a unit-free measure called the correlation coefficient which ranges from -1 to +1 and is denoted by r. Statistical significance is indicated with a p-value. A p-value is a measure of probability used for hypothesis testing. Therefore, correlations are typically written with two key numbers: r = and p = . It has the following implications:

- The closer r is to zero, the weaker the linear relationship.
- Positive r values indicate a positive correlation, where the values of both variables tend to increase together.
- Negative r values indicate a negative correlation, where the values of one variable tend to increase when the values of the other variable decrease.
- The p-value gives us evidence that we can meaningfully conclude that the population correlation coefficient is likely different from zero, based on what we observe from the sample.
- "Unit-free measure" means that correlations exist on their own scale: in our example, the number given for r is not on the same scale as either elevation or temperature. This is different from other summary statistics. For instance, the mean of the elevation measurements is on the same scale as its variable.

The most common formula to calculate correlation coefficient is the Pearson Correlation coefficient used for linear dependency between the data sets. The value of the coefficient lies between -1 to +1. When the coefficient comes down to zero, then the data is considered as not related. While, if we get the value of +1, then the data are positively correlated, and -1 has a negative correlation. The formula looks like:

![Pearson formula](resources/Pearson-Correlation.png)

![Pearson formula where](resources/Pearson-Correlation-where.png)

Correlation coefficient can also be calculated using: linear correlation coefficient, sample correlation coefficient and population correlation coefficient.

##### Spurious Relationship

“Spurious relationships” are relationships in which two or more variables seem to be related (correlated) but are not in fact directly linked. The two independent variables may, however, be found to have a connection mainly as a coincidence or due to the existence of unforeseen factors. Relationship is caused by third “lurking” variable. and could influence independent variable, or both independent and dependent variables.

Let's look into an example where a researcher notices a relationship between speeding and traffic accidents. So, they ask the question: does speed kill? It could be due to:

- Dependent variable: Reported accidents
- Independent variable: Speeding violations
- Hypothesis: Individuals with higher numbers of speeding violations will get in more accidents.
- Data: Driving records of 100 serious driving accidents
- Finds support for the hypothesis

So now what is wrong here?

- First, the data is selected on the dependent variable. This is not good. The dependent variable does not vary.
- Spurious relationship: what if there is a third variable that has a greater influence on the dependent variable

So, another researcher takes a random sample of drivers (both in accidents and not). He includes an additional variable: miles driven. It seems to look like that from his findings that the more miles one drives the more likely they are to get tickets and the more likely they are to get into accidents. This looks like that miles driven is a third wheel in the relationship between speeding violations and reported accidents. This is a spurious relationship and can be demonstrated by the following diagram.

![Spurious example](resources/spurious-example.png)

##### Chi-Squared Test of Independence

The chi-square test of independence is used to test for a relationship between two categorical variables. Recall that if two categorical variables are independent, then P(A) = P(A|B). The chi-square test of independence uses this fact to compute expected values for the cells in a two-way contingency table under the assumption that the two variables are independent (i.e., the null hypothesis is true).

The Chi-square test is a non-parametric statistic, also called a distribution free test. Non-parametric tests should be used when any one of the following conditions pertains to the data:

- The level of measurement of all the variables is nominal or ordinal.
- The sample sizes of the study groups are unequal; for the χ2 the groups may be of equal size or unequal size whereas some parametric tests require groups of equal or approximately equal size.
- The original data were measured at an interval or ratio level, but violate one of the following assumptions of a parametric test:
  - The distribution of the data was seriously skewed or kurtotic (parametric tests assume approximately normal distribution of the dependent variable), and thus the researcher must use a distribution free statistic rather than a parametric statistic.
  - The data violate the assumptions of equal variance or homoscedasticity.
  - For any of a number of reasons (1), the continuous data were collapsed into a small number of categories, and thus the data are no longer interval or ratio.

A Chi-Square test of independence uses the following null and alternative hypotheses:

- H(0): (null hypothesis) The two variables are independent.
- H(1): (alternative hypothesis) The two variables are not independent. (i.e. they are associated)

Considering all these, we can define the chi's square test as:

![Chi-square test](resources/Chi-square-test.PNG)

where the expected cell value can be given as:

![Chi-square test](resources/Chi-square-test-expected.PNG)

If the p-value that corresponds to the test statistic χ2 with (number of rows - 1)*(number of columns - 1) degrees of freedom is less than your chosen significance level then you can reject the null hypothesis.

##### Mediation

In statistics, a mediation model seeks to identify and explain the mechanism or process that underlies an observed relationship between an independent variable and a dependent variable via the inclusion of a third hypothetical variable, known as a mediator variable (also a mediating variable, intermediary variable, or intervening variable).[1] Rather than a direct causal relationship between the independent variable and the dependent variable, a mediation model proposes that the independent variable influences the (non-observable) mediator variable, which in turn influences the dependent variable. Thus, the mediator variable serves to clarify the nature of the relationship between the independent and dependent variables.[2]

Mediation analyses are employed to understand a known relationship by exploring the underlying mechanism or process by which one variable influences another variable through a mediator variable.[3] In particular, mediation analysis can contribute to better understanding the relationship between an independent variable and a dependent variable when these variables do not have an obvious direct connection.

Let's consider an example where we consider that a previous studies have suggested that higher grades predict higher happiness: X (grades) → Y (happiness). It can be shown be the following illustration:

mediation_ex1

I think, however, grades are not the real reason that happiness increases. I hypothesize that good grades boost one’s self-esteem and then high self-esteem boosts one’s happiness: X (grades) → M (self-esteem) → Y (happiness).

mediation_ex2

This is a typical case of mediation analysis. Self-esteem is a mediator that explains the underlying mechanism of the relationship between grades (IV) and happiness (DV).



##### Moderation





Measuring how data is spread out: calculating variance
Standard deviation and coefficient of variation
Calculating and understanding covariance
correlation
coefficient

### Estimation
8.1 The estimation game . . . . . . . . . . . . . . . . . . . . . . 105
8.2 Guess the variance . . . . . . . . . . . . . . . . . . . . . . . 107
8.3 Sampling distributions . . . . . . . . . . . . . . . . . . . . . 109
8.4 Sampling bias . . . . . . . . . . . . . . . . . . . . . . . . . . 112
8.5 Exponential distributions . . . . . . . . . . . . . . . . . . . . 113
8.6 Exercises . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 115
8.7 Glossary . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 116

### Hypothesis testing
9.1 Classical hypothesis testing . . . . . . . . . . . . . . . . . . . 117
9.2 HypothesisTest . . . . . . . . . . . . . . . . . . . . . . . . . 119
9.3 Testing a difference in means . . . . . . . . . . . . . . . . . . 121
9.4 Other test statistics . . . . . . . . . . . . . . . . . . . . . . . 123
9.5 Testing a correlation . . . . . . . . . . . . . . . . . . . . . . 124
9.6 Testing proportions . . . . . . . . . . . . . . . . . . . . . . . 125
9.7 Chi-squared tests . . . . . . . . . . . . . . . . . . . . . . . . 127
9.8 First babies again . . . . . . . . . . . . . . . . . . . . . . . . 128
9.9 Errors . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 130
9.10 Power . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 130
9.11 Replication . . . . . . . . . . . . . . . . . . . . . . . . . . . . 132
9.12 Exercises . . . . . . . . . . . . . . . . . . . . . . . . . . . . . 133
9.13 Glossary . . . . . . . . . .


### Analytic methods

14.1 Normal distributions . . . . . . . . . . . . . . . . . . . . . . 217
14.2 Sampling distributions . . . . . . . . . . . . . . . . . . . . . 219
14.3 Representing normal distributions . . . . . . . . . . . . . . . 220
14.4 Central limit theorem . . . . . . . . . . . . . . . . . . . . . . 221
14.5 Testing the CLT . . . . . . . . . . . . . . . . . . . . . . . . . 222
14.6 Applying the CLT . . . . . . . . . . . . . . . . . . . . . . . . 227
14.7 Correlation test . . . . . . . . . . . . . . . . . . . . . . . . . 228
14.8 Chi-squared test . . . . . . . . .

### Statistic in ML model accuracy

kappa, chi sqare, f measure ....
