all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall --cc --trace vsrc/top.v csrc/*.cpp --build --exe	
include ../Makefile
