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
