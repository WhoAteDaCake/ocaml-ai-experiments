#define CAML_NAME_SPACE

#include <stdio.h>
#include <string>
#include <caml/mlvalues.h>
#include <caml/fail.h>
#include <caml/memory.h>
#include <caml/alloc.h>
#include <opencv/opencv.hpp>
#include <opencv/objdetect.hpp>
#include <opencv/highgui.hpp>
#include <opencv/imgproc.hpp>

extern "C"
{
  void detect_face()
  {
    std::string file_name;
    cv::Mat img = cv::imread("../images/ch1.jpeg");
    cv::imshow("Test", img);
    cv::waitKey();
  }
  CAMLprim value
  caml_try_detect(value unit)
  {
    detect_face();
    return Val_unit;
  }

  CAMLprim value caml_bar(value v1, value v2, value v3)
  {
    CAMLparam3(v1, v2, v3);
    CAMLlocal1(result);
    result = caml_alloc(3, 0);
    Store_field(result, 0, v1);
    Store_field(result, 1, v2);
    Store_field(result, 2, v3);
    CAMLreturn(result);
  }
}