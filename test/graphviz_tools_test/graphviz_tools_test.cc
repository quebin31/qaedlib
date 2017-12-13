#include "graphviz_tools/gvtools.h"

int main() {
  aled::GVTool gvt;
  gvt.createGraph("G", Agdirected);

  gvt.node("n");
  gvt.node("m");
  gvt.node("p");
  gvt.node("q<sub>dsd</sub>");

  gvt.edge("n", "m");
  gvt.edge("p", "q<sub>dsd</sub>");

  gvt.layout("dot");
  gvt.renderToFile("png", "out.png");
  
  gvt.xdgOpenFile("out.png");
  return 0;
}