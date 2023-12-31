#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     롯데 만만세
# Author:      Cho
# Created:     2021-03-23
#-------------------------------------------------------------------------------

import networkx as nx
import matplotlib.pyplot as plt

G=nx.DiGraph()

item = [1,2]

G.add_edge(*item) #color = item[-1], weight = 2)

pos = nx.circular_layout(G)
nx.draw(G, pos, with_labels = True, \
           edge_color = 'b', arrowsize=20, arrowstyle='-|>')
plt.show()