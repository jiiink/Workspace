
import networkx as nx
import matplotlib.pyplot as plt

# python 3.7 이하에서만 동작한다. Scipy, numpy가 3.8이상에서 박치기 함

G=nx.Graph()

G.add_edge('a','b',weight=0.6)
G.add_edge('a','c',weight=0.2)
G.add_edge('c','d',weight=0.1)
G.add_edge('c','e',weight=0.7)
G.add_edge('c','f',weight=0.9)
G.add_edge('a','d',weight=0.3)

elarge=[(u,v) for (u,v,d) in G.edges(data=True) if d['weight'] >0.5]
esmall=[(u,v) for (u,v,d) in G.edges(data=True) if d['weight'] <=0.5]

all     = ['bipartite_layout',
           'circular_layout',
           'kamada_kawai_layout',
           'random_layout',
           'rescale_layout',
           'shell_layout',
           'spring_layout',
           'spectral_layout',
           'planar_layout', # 없음
           'fruchterman_reingold_layout']


pos = nx.spring_layout(G) # positions for all nodes
pos = nx.shell_layout(G)
pos = nx.kamada_kawai_layout(G) # 3.8에서는 오류가 남.
pos = nx.spectral_layout(G)
pos = nx.planar_layout(G)
pos = nx.circular_layout(G)


# nodes
nx.draw_networkx_nodes(G,pos,node_size=900, node_color='crimson')

# edges
nx.draw_networkx_edges(G,pos,edgelist=elarge, edge_color='tomato', width=3)
nx.draw_networkx_edges(G,pos,edgelist=esmall, width=3,alpha=0.5,edge_color='b',style='dashed')

# labels
nx.draw_networkx_labels(G,pos,font_color='w', font_size=20,font_family='sans-serif')

plt.axis('off')
plt.show() #