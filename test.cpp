
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

int main() {
  auto image = cv::imread("./test.png");
  
  cv::imshow("hi :)", image);
  cv::waitKey();
  
  return 0;
}

