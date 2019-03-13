#include <stdio.h>
#include <caml/mlvalues.h>
#include <opencv2/opencv.hpp>

extern "C"
{
  CAMLprim value
  caml_print_hello(value unit)
  {
    printf("Hello\n");
    return Val_unit;
  }
}