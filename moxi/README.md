<!--
This file is part of the SV-Benchmarks collection of verification tasks:
https://github.com/sosy-lab/sv-benchmarks

SPDX-FileCopyrightText: 2011-2026 The SV-Benchmarks Community

SPDX-License-Identifier: Apache-2.0
-->

MoXI Benchmarks
---------------

The verification tasks in `QF_ABV/`, `QF_BV/`, and `QF_LIA/` are transition
systems written in the MoXI language, organized by their declared SMT-LIB logic.
See [CONVENTIONS.md](CONVENTIONS.md) for the conventions of this track and
[properties/unsat-query.md](properties/unsat-query.md) for the property.

The tasks were curated in
<https://gitlab.com/sosy-lab/research/data/moxi-benchmarks> and were originally
sourced from <https://github.com/ModelChecker/Benchmarks>.

All models are MoXI translations of the SMV benchmark models distributed with
the nuXmv model checker (<https://nuxmv.fbk.eu>, directory
`usr/local/share/nuxmv/examples`), Copyright 2014-2026 Fondazione Bruno
Kessler. The nuXmv team has agreed that these benchmark models may be used
under the Creative Commons Attribution 4.0 license (CC-BY-4.0), under which
they are redistributed here. The translation to MoXI was performed with
MoXI-MC-Flow and constitutes a modification of the original models. The QF_LIA
`lustre/` models originate from Lustre programs of the Kind benchmark suite
(Hagen and Tinelli, FMCAD 2008); the QF_BV `beem/` models from the BEEM
database (Pelánek), translated to BTOR by Jori Dubrovin (Aalto University);
other families derive from VIS, VCEGAR, SystemC, SV-COMP, and InvGen sources.
