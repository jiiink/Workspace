

import matplotlib.pyplot as plt
import networkx as nx
import networkx.algorithms.bipartite as bipartite

fig = plt.figure(figsize=(10,8)) # 8인치 by 8인치

G1 = nx.trivial_graph(  )
plt.title( "> binomial_tree( n ) ")
nx.draw( G1, node_size=1000, with_labels=True, node_color='tomato' )
plt.show()


