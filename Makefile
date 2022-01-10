.PHONY: clean All

All:
	@echo "----------Building project:[ percentage_change - Debug ]----------"
	@cd "percentage_change" && "$(MAKE)" -f  "percentage_change.mk"
clean:
	@echo "----------Cleaning project:[ percentage_change - Debug ]----------"
	@cd "percentage_change" && "$(MAKE)" -f  "percentage_change.mk" clean
