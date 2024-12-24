example (r : α  α  Prop) (q : Quot r) : False := by
  induction q using Quot.ind with
  | mk x => admit
