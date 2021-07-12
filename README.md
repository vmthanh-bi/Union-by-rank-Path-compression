<!-- PROJECT START -->
# Union by rank & Path compression
Given a disjoint set data structure, I use two strategies - union by rank and path compression - to find the connected components of the structure's graph.

<!-- TABLE OF CONTENTS -->
<details open="open">
  <summary>Table of Contents</summary>
  <ol>
    <li><a href="#about-the-project">About The Project</a></li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#help">Help</a></li>
    <li><a href="#contact">Contact</a></li>
  </ol>
</details>

<!-- ABOUT THE PROJECT -->
## About the project

A graph is a data structure composed of *vertices* connected by *edges*.

<p align="center">
  <img src="https://www2.lawrence.edu/fast/GREGGJ/CMSC510/Ch21/Chapter211.png">
</p>

A graph can consist of one or more connected components: these are sets of vertices that are connected by edges. The picture above shows 
a graph with three connected components.

Here is an algorithm to find all of the connected components in a graph:

1. Make a set for each vertex in the graph, with the label of that vertex being the sole element of the set.
2. For each edge in the set:
   * Check to see if the vertices at either end of the edge lie in different sets.
   * If they do, replace the two separate sets with a single set that is the union of the two separate sets.
3. Once all of the edges has been processed, output the list of sets that remain. These are the connected components of the graph.

Here is a picture that illustrates how this algorithm works.

![][a]

The objective of this program is to use the methods, union by rank and path compression, to create an algorithm that can efficiently 
connect components of such a graph.

<!-- GETTING STARTED -->
## Getting Started

To get a local copy up and running follow these simple steps.

### Prerequisites

Things you need to use the software.
* MacOS
* Xcode

### Installation

Clone this repo.
   ```sh
   git clone https://github.com/vmthanh-bi/Union-by-rank-Path-compression.git
   ```

<!-- Help -->
## Help

See the [open issues](https://github.com/vmthanh-bi/Union-by-rank-Path-compression/issues) for a list of proposed features (and known issues).

<!-- CONTACT -->
## Contact

Tony Vu - [@vmthanh.bi](https://github.com/vmthanh-bi) - vmthanh.bi@gmail.com

Project Link: [https://github.com/vmthanh-bi/Union-by-rank-Path-compression](https://github.com/vmthanh-bi/Union-by-rank-Path-compression)

<!-- MARKDOWN LINKS & IMAGES -->
[a]: https://www2.lawrence.edu/fast/GREGGJ/CMSC510/Ch21/Chapter212.png

