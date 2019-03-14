type test = {
  first: int;
  second: int;
  third: int;
}


external try_detect: unit -> unit = "caml_try_detect"
external bar: int -> int -> int -> test = "caml_bar"

let run () = try_detect ()
(* let run () =
  let obj = bar 1 2 3 in
  print_endline (string_of_int obj.second) *)