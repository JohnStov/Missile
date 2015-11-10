using System;
using System.Threading.Tasks;
using Windows.Devices.Enumeration;
using Windows.Devices.HumanInterfaceDevice;
using Windows.Devices.Sensors;
using Windows.Storage;
using Windows.UI.Xaml.Controls;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

namespace Missile
{
    /// <summary>
    ///     An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        public MainPage()
        {
            InitializeComponent();
            Loaded += MainPage_Loaded;
        }

        private Launcher launcher;

        private void MainPage_Loaded(object sender, Windows.UI.Xaml.RoutedEventArgs e)
        {
            launcher = Task.Run(Launcher.CreateAsync).Result;
            Task.Run(launcher.SetLightOnAsync);
        }

        private void Up_Click(object sender, Windows.UI.Xaml.RoutedEventArgs e)
        {
            Task.Run(launcher.MoveUpAsync);
        }

        private void Left_Click(object sender, Windows.UI.Xaml.RoutedEventArgs e)
        {
            Task.Run(launcher.MoveLeftAsync);
        }

        private void Fire_Click(object sender, Windows.UI.Xaml.RoutedEventArgs e)
        {
            Task.Run(launcher.FireAsync);
        }

        private void Right_Click(object sender, Windows.UI.Xaml.RoutedEventArgs e)
        {
            Task.Run(launcher.MoveRightAsync);
        }

        private void Down_Click(object sender, Windows.UI.Xaml.RoutedEventArgs e)
        {
            Task.Run(launcher.MoveDownAsync);
        }

        private void Led_Click(object sender, Windows.UI.Xaml.RoutedEventArgs e)
        {
            if (launcher == null)
                return;

            var checkbox = sender as CheckBox;
            if (checkbox.IsChecked.Value)
                Task.Run(launcher.SetLightOnAsync);
            else
                Task.Run(launcher.SetLightOffAsync);
        }
    }
}