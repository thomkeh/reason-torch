open Torch

let () = {
  let tensor = Tensor.randn([ 4, 2 ])
  Tensor.print(tensor)
}
