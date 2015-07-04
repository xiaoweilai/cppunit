// file1 : dijkstra.h 该头文件中含有下面代码，现在我们要使用cppunit对构造函数进行测试

#ifndef DIJKSTRA_H
#define DIJKSTRA_H
struct Vertex
{
public:
    char label; // label (e.g. 'A')

    bool wasVisited;
    bool isInTreeVerts;
    
    Vertex( char lab ) // constructor

    {
        label = lab;
    }
}; // end struct Vertex

#endif

