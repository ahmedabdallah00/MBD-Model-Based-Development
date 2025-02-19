classdef app < matlab.apps.AppBase

    % Properties that correspond to app components
    properties (Access = public)
        UIFigure          matlab.ui.Figure
        ONOFFSwitch       matlab.ui.control.Switch
        ONOFFSwitchLabel  matlab.ui.control.Label
        SimulationButton  matlab.ui.control.Button
        L1EditField       matlab.ui.control.EditField
        L1EditFieldLabel  matlab.ui.control.Label
        L2EditField       matlab.ui.control.EditField
        L2EditFieldLabel  matlab.ui.control.Label
        UIAxes            matlab.ui.control.UIAxes
    end

    % Callbacks that handle component events
    methods (Access = private)

        % Button pushed function: SimulationButton
        function SimulationButtonPushed(app, event)
hold(app.UIAxes,'off')
theta1=linspace(0,90,1000);
theta2=linspace(0,180,1000);
Link1 = str2double(app.L1EditField.Value);
Link2 = str2double(app.L2EditField.Value); % Convert input to scalar if needed
Link1_x=Link1 *cosd(theta1); 
Link1_y=Link1 *sind(theta1);
Link2_x=Link1_x+ Link2 *cosd(theta1+theta2); 
Link2_y=Link1_y+ Link2 *sind(theta1+theta2);
p1=plot(app.UIAxes,[0,Link1_x(1)],[0,Link1_y(1)]);
p2=plot(app.UIAxes,[Link1_x(1),Link2_x(1)],[Link1_y(1),Link2_y(1)]);
p3=plot(app.UIAxes,Link2_x(1), Link2_y(1), 'ro', 'MarkerSize', 8, 'MarkerFaceColor', 'g');
hold(app.UIAxes,'on')
xlim(app.UIAxes,[-Link1*2,Link1*2]);
ylim(app.UIAxes,[-Link1*2,Link1*2]);
plot(app.UIAxes,Link2_x,Link2_y);
plot(app.UIAxes,Link1_x,Link1_y,'k');
while(app.ONOFFSwitch.Value == 'On')
for i= 1:10:length(theta1)
    delete(p1); delete(p2);delete(p3);
    p1= plot(app.UIAxes,[0,Link1_x(i)],[0,Link1_y(i)],'r');
    p2= plot(app.UIAxes,[Link1_x(i),Link2_x(i)],[Link1_y(i),Link2_y(i)],'b');
    p3=plot(app.UIAxes,Link2_x(i), Link2_y(i), 'ro', 'MarkerSize', 8, 'MarkerFaceColor', 'g');
    drawnow
    pause(0.1);
end
end
        end
    end

    % Component initialization
    methods (Access = private)

        % Create UIFigure and components
        function createComponents(app)

            % Create UIFigure and hide until all components are created
            app.UIFigure = uifigure('Visible', 'off');
            app.UIFigure.Position = [100 100 640 480];
            app.UIFigure.Name = 'MATLAB App';

            % Create UIAxes
            app.UIAxes = uiaxes(app.UIFigure);
            title(app.UIAxes, 'Robot Motion Simulation')
            xlabel(app.UIAxes, 'X')
            ylabel(app.UIAxes, 'Y')
            zlabel(app.UIAxes, 'Z')
            app.UIAxes.Position = [19 98 604 363];

            % Create L2EditFieldLabel
            app.L2EditFieldLabel = uilabel(app.UIFigure);
            app.L2EditFieldLabel.HorizontalAlignment = 'right';
            app.L2EditFieldLabel.Position = [460 51 25 22];
            app.L2EditFieldLabel.Text = 'L2';

            % Create L2EditField
            app.L2EditField = uieditfield(app.UIFigure, 'text');
            app.L2EditField.CharacterLimits = [0 20];
            app.L2EditField.Position = [500 51 100 22];
            app.L2EditField.Value = '7';

            % Create L1EditFieldLabel
            app.L1EditFieldLabel = uilabel(app.UIFigure);
            app.L1EditFieldLabel.HorizontalAlignment = 'right';
            app.L1EditFieldLabel.Position = [275 51 25 22];
            app.L1EditFieldLabel.Text = 'L1';

            % Create L1EditField
            app.L1EditField = uieditfield(app.UIFigure, 'text');
            app.L1EditField.CharacterLimits = [0 20];
            app.L1EditField.Position = [315 51 100 22];
            app.L1EditField.Value = '10';

            % Create SimulationButton
            app.SimulationButton = uibutton(app.UIFigure, 'push');
            app.SimulationButton.ButtonPushedFcn = createCallbackFcn(app, @SimulationButtonPushed, true);
            app.SimulationButton.Position = [162 51 100 22];
            app.SimulationButton.Text = 'Simulation';

            % Create ONOFFSwitchLabel
            app.ONOFFSwitchLabel = uilabel(app.UIFigure);
            app.ONOFFSwitchLabel.HorizontalAlignment = 'center';
            app.ONOFFSwitchLabel.Position = [70 34 50 22];
            app.ONOFFSwitchLabel.Text = 'ON/OFF';

            % Create ONOFFSwitch
            app.ONOFFSwitch = uiswitch(app.UIFigure, 'slider');
            app.ONOFFSwitch.Position = [67 71 45 20];
            app.ONOFFSwitch.Value = 'On';

            % Show the figure after all components are created
            app.UIFigure.Visible = 'on';
        end
    end

    % App creation and deletion
    methods (Access = public)

        % Construct app
        function app = app1

            % Create UIFigure and components
            createComponents(app)

            % Register the app with App Designer
            registerApp(app, app.UIFigure)

            if nargout == 0
                clear app
            end
        end

        % Code that executes before app deletion
        function delete(app)

            % Delete UIFigure when app is deleted
            delete(app.UIFigure)
        end
    end
end