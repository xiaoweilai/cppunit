// file2 : GraphTest.h

#include "dijkstra.h"

#include "cppunit/TestFixture.h"

class GraphTest : public CppUnit::TestFixture {
protected:
    Vertex * m_vertex;
public:
    GraphTest() {}

    // 初始化函数

    void setUp ();
    // 清理函数

    void tearDown();
    
    // 测试构造函数的测试函数

    void testConstructor ();
    //还可以添加新的测试函数

};

