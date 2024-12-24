theorem ex (v v' : Nat) (ty : Nat  String) (h : some v = some v') : some (ty v) = some (ty v') := by
  simp_all
