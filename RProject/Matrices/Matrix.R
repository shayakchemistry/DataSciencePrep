# Matrix examples

# Creating and accessing a matrix
mat1 <- matrix(1:9,nrow = 3)
print(mat1)

# Named Matrix
row_names1 <- c("row1", "row2", "row3")
col_names1 <- c("col1", "col2", "col3")
rownames(mat1) <- row_names1
colnames(mat1) <- col_names1

print(mat1)

# Operations

# Check dimension
print(dim(mat1))
print(nrow(mat1))
print(ncol(mat1))

# Arithmetic Operations

mat_a = matrix(1:9, nrow = 3)
mat_b = matrix(11:19,nrow = 3)

print(mat_a + mat_b) # Addition
print(mat_a - mat_b) # Subtraction
print(5 * mat_b) # Scaler Multiplication
print(mat_a %*% mat_b) # Matrix Multiplication
print(mat_a / mat_b) # Division

# Transpose
mat2 <- matrix(1:8, nrow = 4)
print(mat2)
print(t(mat2))

# Inverse
mat3 <- matrix(3:6,nrow = 2)
mat3_t <- solve(mat3)
print(mat3)
print(mat3_t)
print(mat3%*%mat3_t) # As A * AT = I

# Determinant

print(det(mat3))

# Column and Row sum
print(rowSums(mat_b))
print(colSums(mat_b))

# Horizontal Concatenation

print(cbind(mat_a, mat_b))

# Vertical Concatenation

print(rbind(mat_a, mat_b))

# Unit matrix
print(matrix(1, 3, 3))

# Zero Matrix
print(matrix(0, 3, 3))

# Diagonal Matrix)
print(diag(c(2,4,5),nrow=3,ncol=3))

# Identity Matrix
print(diag(1,3,3))

# Matplot

data1 <- 1:10
data2 <- data1^2
f_data1 <- cbind(data1,data2)
print(f_data1)
matplot(f_data1)

# Subsetting

print(mat1[1:2,1:2])
print(subset(mat1))
      
      