
import matplotlib.pyplot as plt
from networkx import nx

G = nx.lollipop_graph(4, 4)

pathlengths = []

print("source vertex {target:length, }")
for v in G.nodes():
    spl = dict(nx.single_source_shortest_path_length(G, v))
    print(('{} {} '.format(v, spl)))
    for p in spl:
        pathlengths.append(spl[p])

print('')
print(("average shortest path length %s" % (sum(pathlengths) / len(pathlengths))))

# histogram of path lengths
dist = {}
for p in pathlengths:
    if p in dist:
        dist[p] += 1
    else:
        dist[p] = 1

print('')
print("length #paths")
verts = list(dist.keys())
for d in sorted(verts):
    print(('%s %d' % (d, dist[d])))

print(("radius: %d" %       nx.radius(G)))
print(("diameter: %d" %     nx.diameter(G)))
print(("eccentricity: %s" % nx.eccentricity(G)))
print(("center: %s" %       nx.center(G)))
print(("periphery: %s" %    nx.periphery(G)))
print(("density: %s" %      nx.density(G)))

nx.draw(G, node_color='green', node_size=800, font_color='w', with_labels=True)
plt.show()

