// NOTE: Do not edit this file. This code is auto-generated. Contact the
// Twilio SDK Team for more information.

//
//  TVIError.h
//  TwilioVideo
//
//  Copyright © 2016-2021 Twilio, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef TVIError_h
#define TVIError_h

API_AVAILABLE(ios(11.0))
FOUNDATION_EXPORT NSErrorDomain _Nonnull const kTVIErrorDomain
NS_SWIFT_NAME(TwilioVideoSDK.ErrorDomain);

/**
 * An enumeration indicating the errors that can be raised by the SDK.
 */
API_AVAILABLE(ios(11.0))
typedef NS_ERROR_ENUM (kTVIErrorDomain, TVIError)
{
    TVIErrorUnknown = 0,                                              ///< An unknown error has occurred
    TVIErrorAccessTokenInvalidError = 20101,                          ///< Invalid Access Token
    TVIErrorAccessTokenHeaderInvalidError = 20102,                    ///< Invalid Access Token header
    TVIErrorAccessTokenIssuerInvalidError = 20103,                    ///< Invalid Access Token issuer/subject
    TVIErrorAccessTokenExpiredError = 20104,                          ///< Access Token expired or expiration date invalid
    TVIErrorAccessTokenNotYetValidError = 20105,                      ///< Access Token not yet valid
    TVIErrorAccessTokenGrantsInvalidError = 20106,                    ///< Invalid Access Token grants
    TVIErrorAccessTokenSignatureInvalidError = 20107,                 ///< Invalid Access Token signature
    TVIErrorSignalingConnectionError = 53000,                         ///< Signaling connection error
    TVIErrorSignalingConnectionDisconnectedError = 53001,             ///< Signaling connection disconnected
    TVIErrorSignalingConnectionTimeoutError = 53002,                  ///< Signaling connection timed out
    TVIErrorSignalingIncomingMessageInvalidError = 53003,             ///< Client received an invalid signaling message
    TVIErrorSignalingOutgoingMessageInvalidError = 53004,             ///< Client sent an invalid signaling message
    TVIErrorSignalingDnsResolutionError = 53005,                      ///< DNS resolution for signaling failed
    TVIErrorSignalingServerBusyError = 53006,                         ///< Video server is busy
    TVIErrorRoomNameInvalidError = 53100,                             ///< Room name is invalid
    TVIErrorRoomNameTooLongError = 53101,                             ///< Room name is too long
    TVIErrorRoomNameCharsInvalidError = 53102,                        ///< Room name contains invalid characters
    TVIErrorRoomCreateFailedError = 53103,                            ///< Unable to create Room
    TVIErrorRoomConnectFailedError = 53104,                           ///< Unable to connect to Room
    TVIErrorRoomMaxParticipantsExceededError = 53105,                 ///< Room contains too many Participants
    TVIErrorRoomNotFoundError = 53106,                                ///< Room not found
    TVIErrorRoomMaxParticipantsOutOfRangeError = 53107,               ///< MaxParticipants is out of range
    TVIErrorRoomTypeInvalidError = 53108,                             ///< RoomType is not valid
    TVIErrorRoomTimeoutOutOfRangeError = 53109,                       ///< Timeout is out of range
    TVIErrorRoomStatusCallbackMethodInvalidError = 53110,             ///< StatusCallbackMethod is invalid
    TVIErrorRoomStatusCallbackInvalidError = 53111,                   ///< StatusCallback is invalid
    TVIErrorRoomStatusInvalidError = 53112,                           ///< Status is invalid
    TVIErrorRoomRoomExistsError = 53113,                              ///< Room exists
    TVIErrorRoomInvalidParametersError = 53114,                       ///< Room creation parameter(s) incompatible with the Room type
    TVIErrorRoomMediaRegionInvalidError = 53115,                      ///< MediaRegion is invalid
    TVIErrorRoomMediaRegionUnavailableError = 53116,                  ///< There are no media servers available in the MediaRegion
    TVIErrorRoomSubscriptionOperationNotSupportedError = 53117,       ///< The subscription operation requested is not supported for the Room type
    TVIErrorRoomRoomCompletedError = 53118,                           ///< Room completed
    TVIErrorRoomAccountLimitExceededError = 53119,                    ///< The Room account limit was exceeded
    TVIErrorRoomInvalidRecordingRuleError = 53120,                    ///< Invalid Recording Rule(s)
    TVIErrorRoomRecordingOperationNotSupportedError = 53122,          ///< The recording operation requested is not supported for the Room type
    TVIErrorRoomAudioOnlyFlagNotSupportedError = 53124,               ///< The AudioOnly flag is not supported for the Room type
    TVIErrorRoomTrackKindNotSupportedError = 53125,                   ///< Track kind is not supported by this Room
    TVIErrorParticipantIdentityInvalidError = 53200,                  ///< Participant identity is invalid
    TVIErrorParticipantIdentityTooLongError = 53201,                  ///< Participant identity is too long
    TVIErrorParticipantIdentityCharsInvalidError = 53202,             ///< Participant identity contains invalid characters
    TVIErrorParticipantMaxTracksExceededError = 53203,                ///< The maximum number of published tracks allowed in the Room at the same time has been reached
    TVIErrorParticipantNotFoundError = 53204,                         ///< Participant not found
    TVIErrorParticipantDuplicateIdentityError = 53205,                ///< Participant disconnected because of duplicate identity
    TVIErrorParticipantAccountLimitExceededError = 53206,             ///< The Participant account limit was exceeded
    TVIErrorParticipantMaxPublishedTracksOutOfRangeError = 53207,     ///< MaxPublishedTracks is out of range
    TVIErrorParticipantInvalidSubscribeRuleError = 53215,             ///< Subscribe Rule(s) invalid
    TVIErrorParticipantSessionLengthExceededError = 53216,            ///< Participant session length exceeded
    TVIErrorTrackInvalidError = 53300,                                ///< Track is invalid
    TVIErrorTrackNameInvalidError = 53301,                            ///< Track name is invalid
    TVIErrorTrackNameTooLongError = 53302,                            ///< Track name is too long
    TVIErrorTrackNameCharsInvalidError = 53303,                       ///< Track name contains invalid characters
    TVIErrorTrackNameIsDuplicatedError = 53304,                       ///< Track name is duplicated
    TVIErrorTrackServerTrackCapacityReachedError = 53305,             ///< The server has reached capacity and cannot fulfill this request
    TVIErrorTrackDataTrackMessageTooLargeError = 53306,               ///< The message is too large
    TVIErrorTrackDataTrackSendBufferFullError = 53307,                ///< Data Track send buffer is full
    TVIErrorMediaClientLocalDescFailedError = 53400,                  ///< Client is unable to create or apply a local media description
    TVIErrorMediaServerLocalDescFailedError = 53401,                  ///< Server is unable to create or apply a local media description
    TVIErrorMediaClientRemoteDescFailedError = 53402,                 ///< Client is unable to apply a remote media description
    TVIErrorMediaServerRemoteDescFailedError = 53403,                 ///< Server is unable to apply a remote media description
    TVIErrorMediaNoSupportedCodecError = 53404,                       ///< No supported codec
    TVIErrorMediaConnectionError = 53405,                             ///< Media connection failed or Media activity ceased
    TVIErrorMediaDataTrackFailedError = 53406,                        ///< The data channel used by the Data Track had a problem
    TVIErrorMediaDtlsTransportFailedError = 53407,                    ///< Media connection failed due to DTLS handshake failure
    TVIErrorMediaIceRestartNotAllowedError = 53408,                   ///< ICE connection restart was attempted, but it is not allowed
    TVIErrorConfigurationAcquireFailedError = 53500,                  ///< Unable to acquire configuration
    TVIErrorConfigurationAcquireTurnFailedError = 53501               ///< Unable to acquire TURN credentials
}
NS_SWIFT_NAME(TwilioVideoSDK.Error);

#endif
