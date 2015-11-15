using System;
using System.Threading.Tasks;
using Windows.Devices.AllJoyn;
using Windows.Foundation;
using com.winhill.missile;

namespace Missile
{
    public class MissileService : ImissileService
    {
        private readonly Launcher launcher;

        public MissileService(Launcher launcher)
        {
            this.launcher = launcher;
        }

        public IAsyncOperation<missileLedResult> LedAsync(AllJoynMessageInfo info, bool interfaceMemberOn)
        {
            return launcher.SetLightAsync(interfaceMemberOn).AsAsyncOperation();
        }

        public IAsyncOperation<missileMoveResult> MoveAsync(AllJoynMessageInfo info, string interfaceMemberDirection, int interfaceMemberTime)
        {
            switch (interfaceMemberDirection.ToUpper())
            {
                case "UP":
                    return launcher.MoveUpAsync(interfaceMemberTime).AsAsyncOperation();
                case "DOWN":
                    return launcher.MoveDownAsync(interfaceMemberTime).AsAsyncOperation();
                case "LEFT":
                    return launcher.MoveLeftAsync(interfaceMemberTime).AsAsyncOperation();
                case "RIGHT":
                    return launcher.MoveRightAsync(interfaceMemberTime).AsAsyncOperation();
                default:
                    return Task.Run(() => missileMoveResult.CreateFailureResult(1)).AsAsyncOperation();
            }
        }

        public IAsyncOperation<missileFireResult> FireAsync(AllJoynMessageInfo info)
        {
            return launcher.FireAsync().AsAsyncOperation();
        }
    }
}