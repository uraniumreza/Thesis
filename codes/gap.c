# Compute gap statistic
library(cluster)
set.seed(123)
gap_stat <- clusGap(iris.scaled, FUN = kmeans, nstart = 25,
                    K.max = 10, B = 50)
# Print the result
print(gap_stat, method = "firstmax")

# Base plot of gap statistic
plot(gap_stat, frame = FALSE, xlab = "Number of clusters k")
abline(v = 3, lty = 2)

# Use factoextra
fviz_gap_stat(gap_stat)

# Print
print(gap_stat, method = "Tibs2001SEmax")
# Plot
fviz_gap_stat(gap_stat,
              maxSE = list(method = "Tibs2001SEmax"))
# Relaxed the gap test to be within two standard deviations
fviz_gap_stat(gap_stat,
          maxSE = list(method = "Tibs2001SEmax", SE.factor = 2))
