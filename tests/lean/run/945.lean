@[simp] def iota : Nat  List Nat
  | 0       => []
  | m@(n+1) => m :: iota n

attribute [simp] List.iota
