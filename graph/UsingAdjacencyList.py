# A graph implementation using adjacency list
# Python 3

class Vertex():

	def __init__(self, key):
		self.id = key
		# A dictionary to act as adjacency list.
		self.connectedTo = {}

	def addEdge(self, vert, w=0):
		self.connectedTo[vert] = w
	
    # Repr
	def __str__(self):
		return str(self.id) + ' connectedTo: ' + str([x.id for x in self.connectedTo])

	def getConnections(self):
		return self.connectedTo.keys()

	def getId(self):
	    return self.id

	def getWeight(self,vert):
		return self.connectedTo[vert]


class Graph():
	"""Graph"""
	def __init__(self):
		# A dictionary to map Vertex-keys and object vertex class.  
		self.vertlist = {}
		self.vertexNum = 0

	def addVertex(self, key):
		self.vertlist[key] = Vertex(key)
		self.vertexNum += 1
		return self.vertlist[key]

	def getVertex(self, key):
		if key in self.vertlist:
			return self.vertlist[key]
		else:
			return None 

	def addEdge(self, h, t, weight=0):
		
		# If any of vertex not in list create them 
		if h not in self.vertlist:
			nv = self.addVertex(h)
		if t not in self.vertlist:
			nv = self.addVertex(t)
		# Add edge from head to tail
		self.vertlist[h].addEdge(self.vertlist[t], weight)

	def getVertices(self):
		return self.vertlist.keys()

	def __iter__(self):
		return iter(self.vertlist.values())


# create a graph 
g = Graph()

# add some vertex 
for i in range(6):
	g.addVertex(i)

print (g.vertlist)

# Some Egdes 
g.addEdge(0,1,5)
g.addEdge(0,5,2)
g.addEdge(1,2,4)
g.addEdge(2,3,9)
g.addEdge(3,4,7)
g.addEdge(3,5,3)
g.addEdge(4,0,1)
g.addEdge(5,4,8)
g.addEdge(5,2,1)

# View them 
for v in g:
   for w in v.getConnections():
       print("( %s , %s )" % (v.getId(), w.getId()))
