\STATE 1. Cluster the observed data, varying the number of clusters
from $k = 1, ..., k_{\mathrm{max}}$, and compute the corresponding $W_k$.
\STATE 2. Generate B reference data sets and cluster each of them with varying number of clusters
$k = 1, ..., k_{\mathrm{max}}$. Compute the estimated gap statistic $\mathrm{Gap}(k) = (1/B) \sum_{b=1}^B \log W^*_{kb} - \log W_k.$
\STATE 3. With $\bar{w} = (1/B) \sum_b \log W^*_{kb}$, compute the standard deviation
$\mathrm{sd}(k) = [(1/B) \sum_b (\log W^*_{kb} - \bar{w})^2]^{1/2}$ and define $\displaystyle s_k = \sqrt{1+1/B}\,\mathrm{sd}(k)$.
\STATE 4. Choose the number of clusters as the smallest $K$ such that $\mathrm{Gap}(k) \geq \mathrm{Gap}(k+1) - s_{k+1}$.

\endinput
