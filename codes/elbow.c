set.seed(123)
# Compute and plot wss for k = 2 to k = 15
k.max <- 15 # Maximal number of clusters
data <- iris.scaled
wss <- sapply(1:k.max,
        function(k){kmeans(data, k, nstart=10 )$tot.withinss})
plot(1:k.max, wss,
       type="b", pch = 19, frame = FALSE,
       xlab="Number of clusters K",
       ylab="Total within-clusters sum of squares")
abline(v = 3, lty =2)

fviz_nbclust(x, FUNcluster, method = c("silhouette", "wss"))

fviz_nbclust(iris.scaled, kmeans, method = "wss") +
    geom_vline(xintercept = 3, linetype = 2)
    
