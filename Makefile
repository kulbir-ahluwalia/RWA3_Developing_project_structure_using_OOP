.PHONY: clean All

All:
	@echo "----------Building project:[ RobotMaze - Debug ]----------"
	@cd "RobotMaze" && "$(MAKE)" -f  "RobotMaze.mk"
clean:
	@echo "----------Cleaning project:[ RobotMaze - Debug ]----------"
	@cd "RobotMaze" && "$(MAKE)" -f  "RobotMaze.mk" clean
