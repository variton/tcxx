# Math Interval Example

This example demonstrates how to model mathematical intervals using:

- mixins / policy-based design
- concepts
- compile-time composition
- no virtual functions

The `Interval` class is the root foundation. It owns the common interval state:

- `lower_bound`
- `upper_bound`

The interval behavior is provided separately through policies such as:

- `ClosedIntervalPolicy` for `[lower, upper]`
- `OpenIntervalPolicy` for `(lower, upper)`
- `HalfClosedLowerBoundPolicy` for `[lower, upper)`
- `HalfClosedUpperBoundPolicy` for `(lower, upper]`

---

# Why use a mixin policy?

Intervals all share the same structure:

```cpp
lower_bound
upper_bound
