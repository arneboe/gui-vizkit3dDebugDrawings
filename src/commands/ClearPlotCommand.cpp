#include "ClearPlotCommand.h"
#include <vizkit3d_debug_drawings/DrawingManager.h>

namespace vizkit3dDebugDrawings
{
    
ClearPlotCommand* ClearPlotCommand::clone() const
{
    return new ClearPlotCommand(*this);
}

void ClearPlotCommand::execute(DrawingManager* drawingManager) const
{
    drawingManager->clearPlot(getDrawingName());
}

ClearPlotCommand::ClearPlotCommand(const std::string& drawingGroupName) :
        Command(drawingGroupName)
{
    
}

ClearPlotCommand::ClearPlotCommand() : Command("default")
{}

ClearPlotCommand::~ClearPlotCommand()
{}
    
}