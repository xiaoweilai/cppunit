// file3 : GraphTest.cpp

#include "GraphTest.h"
#include "cppunit/TestAssert.h"

void GraphTest::setUp()
{
    m_vertex = new Vertex( 'V' );
}

void GraphTest::tearDown()
{
    delete m_vertex ;
}

void GraphTest::testConstructor()
{
    CPPUNIT_ASSERT( m_vertex->label == 'V' ); 
    CPPUNIT_ASSERT( m_vertex->wasVisited == true );
    CPPUNIT_ASSERT( m_vertex->isInTreeVerts == true );
}

