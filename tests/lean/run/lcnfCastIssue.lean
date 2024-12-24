namespace MWE

universe u v w

inductive Id {A : Type u} : A  A  Type u
| refl {a : A} : Id a a

attribute [induction_eliminator] Id.casesOn

infix:50 (priority := high) " = " => Id

inductive Unit : Type u
| star : Unit

attribute [induction_eliminator] Unit.casesOn

notation "𝟏" => Unit
notation "★" => Unit.star
notation "ℕ" => Nat

def vect (A : Type u) : ℕ  Type u
| Nat.zero   => 𝟏
| Nat.succ n => A × vect A n

def vect.const {A : Type u} (a : A) : ∀ n, vect A n
| Nat.zero   => ★
| Nat.succ n => (a, const a n)

def vect.map {A : Type u} {B : Type v} (f : A  B) :
  ∀ {n : ℕ}, vect A n  vect B n
| Nat.zero   => λ _ => ★
| Nat.succ n => λ v => (f v.1, map f v.2)

def transport {A : Type u} (B : A  Type v) {a b : A} (p : a = b) : B a  B b :=
by { induction p; apply id }

def vect.subst {A B : Type u} (p : A = B) (f : B  A) {n : ℕ} (v : vect A n) :
  vect.map f (transport (vect · n) p v) = vect.map (f  transport id p) v :=
by { induction p; apply Id.refl }
