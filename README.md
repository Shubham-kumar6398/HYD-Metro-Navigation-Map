# HYD-Metro-Navigation-Map
This system helps travelers find the shortest path between the boarding station and the destination station of the Hyderabad metro. It also shows you which color line you must take and at which station you must change the metro.

# Data Structures Used
1. Vector
2. Array/string
3. Unordered_map

# Working & Implementation of the program
The program uses Dijkstra's algorithm to find the shortest distance between the two stations. The Map file stores the data of the Hyderabad metro map, and the program uses this data to generate the undirected graph, which is used to find the shortest distance between the boarding station and the destination station. The parent vector in the program is used to store the parent station of every station. Then we store the parent of all the stations lying in the shortest path in another vector called result. Finally, we reverse your result vector, which consists of the names of all the stations lying in the shortest path between the boarding and the destination station.

This program shows you at which station you have to change the metro. If you need to change the metro, it will show you which color line metro you have to take to reach your desired destination.
