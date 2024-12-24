def main : List String  IO Unit
| [n] => do
  let mut s := 0
  for i in [0:n.toNat!] do
    for j in [:i] do
      s := s + j.repr.length
  IO.println s
| _ => throw $ IO.userError "give upper bound"
